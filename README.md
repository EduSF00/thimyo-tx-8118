# Thymio TX — Documentation

ROS 2 (Jazzy) project for controlling the Thymio robot with modular behaviors: circular trajectory, line follower, object follower and wall follower.

## Table of Contents

1. [Prerequisites](#1-prerequisites)
2. [Architecture](#2-architecture)
3. [Environment setup](#3-environment-setup)
4. [Workspace and Git](#4-workspace-and-git)
5. [Behaviors](#5-behaviors)
   * [Circular trajectory](#51-circular-trajectory-circle_trajectory)
   * [Line follower](#52-line-follower-line_follower)
   * [Object follower](#53-object-follower-object_follower)
   * [Wall follower](#54-wall-follower-wall_follower)
6. [Modular nodes](#6-modular-nodes)
7. [Custom messages](#7-custom-messages-project_msgs)
8. [References](#8-references)

---

## 1. Prerequisites

* **Ubuntu** operating system.
* **Python** installed.
* **ROS 2 Jazzy** (see [section 3](#3-environment-setup)).

---

## 2. Architecture

The system follows a modular three-layer architecture within ROS 2:

| Layer                    | Folder     | Role                                                                                                           |
|:------------------------ |:---------- |:-------------------------------------------------------------------------------------------------------------- |
| **Sensor**               | `sensor/`  | Reads raw data from the Thymio driver (odometry, ground sensors, proximity) and publishes processed information. |
| **Navigation and error** | `nav/`     | Computes references (such as the target point on the circle) and the error relative to the goal.                |
| **Control**              | `control/` | Converts the error into velocities (`geometry_msgs/msg/Twist`) sent to the robot on `/cmd_vel`.                |

General flow: `thymio_driver` → **sensor** → **nav** → **control** → `/cmd_vel` → `thymio_driver`.

---

## 3. Environment setup

Guide to installing ROS 2 Jazzy, ROS-Aseba and ROS-Thymio.

### 3.1 Install ROS 2

**Locale with UTF-8 support:**

```bash
sudo apt update && sudo apt install locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8
locale
```

**ROS 2 apt repository:**

```bash
sudo apt install software-properties-common
sudo add-apt-repository universe
```

**`ros2-apt-source` package:**

```bash
sudo apt update && sudo apt install curl -y
export ROS_APT_SOURCE_VERSION=$(curl -s https://api.github.com/repos/ros-infrastructure/ros-apt-source/releases/latest | grep -F "tag_name" | awk -F'"' '{print $4}')
curl -L -o /tmp/ros2-apt-source.deb "https://github.com/ros-infrastructure/ros-apt-source/releases/download/${ROS_APT_SOURCE_VERSION}/ros2-apt-source_${ROS_APT_SOURCE_VERSION}.$(. /etc/os-release && echo ${UBUNTU_CODENAME:-${VERSION_CODENAME}})_all.deb"
sudo dpkg -i /tmp/ros2-apt-source.deb
```

**Update and install:**

```bash
sudo apt update
sudo apt upgrade
sudo apt install ros-jazzy-desktop
sudo apt install ros-jazzy-ros-base
```

### 3.2 Create the ROS workspace

If you don't have one yet, create the workspace in a `<WORKSPACE>` folder of your choice:

```bash
mkdir -p <WORKSPACE>/src
cd <WORKSPACE>
source /opt/ros/jazzy/setup.bash
colcon build
```

### 3.3 Install ROS-Aseba

```bash
sudo apt install software-properties-common
sudo add-apt-repository universe
sudo apt install libudev-dev libxml2-dev git ros-jazzy-diagnostic-updater

cd <WORKSPACE>
source install/setup.bash
git clone https://github.com/jeguzzi/ros-aseba.git --branch ros2 --recurse-submodules src/ros-aseba
colcon build
```

**Serial port access (Linux):** add your user to the `dialout` group, then restart your session (or the computer).

```bash
sudo adduser $USER dialout
```

### 3.4 Install ROS-Thymio

```bash
sudo apt install ros-jazzy-xacro ros-jazzy-tf2 ros-jazzy-robot-state-publisher

cd <WORKSPACE>
source install/setup.bash
git clone https://github.com/jeguzzi/ros-thymio.git --branch master --recurse-submodules src/ros-thymio
colcon build
```

---

## 4. Workspace and Git

### 4.1 Workspace structure

The project uses a standard `colcon` workspace with **two packages** inside `src/`:

```text
thimyo-tx-8118/
├── Makefile                    # shortcuts for build, tests and launch
├── README.md                   # this document
└── src/
    ├── project/                # main package (ament_python)
    │   ├── config/             # simulation and calibration parameters (.yaml)
    │   ├── launch/             # one .launch.py per behavior
    │   └── project/
    │       ├── sensor/
    │       ├── nav/
    │       └── control/
    └── project_msgs/           # custom messages (ament_cmake)
        └── msg/
```

* **`project`**: nodes for the three layers and launch files. Each launch file starts the `thymio_driver` along with the complete chain for the behavior.
* **`project_msgs`**: only the `.msg` messages used between nodes (see [section 7](#7-custom-messages-project_msgs)).

### 4.2 Get the repository

```bash
git clone https://github.com/EduSF00/thimyo-tx-8118.git
cd thimyo-tx-8118
```

### 4.3 Build

Build the message package first, then the main package:

```bash
source /opt/ros/jazzy/setup.bash
colcon build --packages-select project_msgs --symlink-install
source install/setup.bash
colcon build --packages-select project --symlink-install
source install/setup.bash
```

With the `Makefile` at the root, just run `make build`.

### 4.4 Update the repository

```bash
cd ~<WORKSPACE>
git pull
colcon build --symlink-install
source install/setup.bash
```

If local changes prevent `git pull`:

```bash
git stash
git pull
git stash pop
```

### 4.5 Connecting to the Thymio

* **Serial port busy or permission denied:** close Aseba Studio (it locks the port) and make sure your user is in the `dialout` group:
  
  ```bash
  sudo usermod -a -G dialout $USER
  ```
  
  You need to log out and log back in.

* **Device not found with `ser:name=Thymio`:** check the active port with `ls /dev/ttyACM*` and use `device:=ser:device=/dev/ttyACM0` with `ros2 launch`.

---

## 5. Behaviors

Each behavior is a chain of `sensor → nav → control` nodes. The node names used in the `ros2 param` commands are those defined in the launch files.

### 5.1 Circular trajectory (`circle_trajectory`)

Makes the Thymio drive along a circle of radius `R` by chasing a target point that moves ahead of it on the circumference, with proportional heading control and lap counting.

#### How it works

1. **`circle_sensor`**: reads odometry from `/odom`, converts the orientation into a planar angle (`yaw`) and publishes the pose on `/robot_pose2d`.
2. **`circle_trajectory`**: if `cx` or `cy` are `nan`, sets the center to the left or right of the robot (depending on `sense`), at a distance `R`. It computes the robot's angle relative to the center, counts complete laps without errors at the ±180° crossing, and places the target point `delta_deg` degrees ahead on the same circle. It publishes the target on `/target_point` and the state on `/circle_state`.
3. **`circle_error`**: computes the distance to the target, the direction to it and the angular error (between -180° and 180°), publishing them on `/tracking_error`.
4. **`circle_control`**: angular velocity proportional to the angular error (gain `k`), limited to `max_omega`, with linear velocity `v`. Publishes on `/cmd_vel`.

#### Topics

| Node                | Inputs                             | Outputs                            | Type                                                                                        |
|:------------------- |:---------------------------------- |:---------------------------------- |:------------------------------------------------------------------------------------------- |
| `circle_sensor`     | `/odom`                            | `/robot_pose2d`                    | `nav_msgs/msg/Odometry` → `geometry_msgs/msg/Pose2D`                                        |
| `circle_trajectory` | `/robot_pose2d`                    | `/target_point`<br>`/circle_state` | `geometry_msgs/msg/Pose2D`<br>`std_msgs/msg/Float64MultiArray` = `[phi, laps, v, k, sense]` |
| `circle_error`      | `/robot_pose2d`, `/target_point`   | `/tracking_error`                  | `geometry_msgs/msg/Vector3` (`x`: distance, `y`: angular error, `z`: direction to target)   |
| `circle_control`    | `/tracking_error`, `/circle_state` | `/cmd_vel`                         | `geometry_msgs/msg/Twist`                                                                   |

#### Run

```bash
# Ros2 launch
ros2 launch project circle_trajectory.launch.py \
  device:=ser:name=Thymio \
  simulation:=False \
  R:=0.30 v:=0.08 k:=2.0 sense:=1.0 delta_deg:=25.0 max_omega:=2.5
```

Monitoring:

```bash
ros2 topic echo /circle_state      # phi, laps, v, k and sense
ros2 topic echo /tracking_error    # distance (x) and angular error (y)
```

#### Parameters

| Node                | Parameter   | Default | Unit    | Description                                                          |
|:------------------- |:----------- |:------- |:------- |:-------------------------------------------------------------------- |
| `circle_trajectory` | `cx`, `cy`  | `nan`   | m       | Circle center (`nan` = set automatically at the first pose)          |
| `circle_trajectory` | `R`         | `0.40`  | m       | Radius (minimum 0.05)                                                |
| `circle_trajectory` | `sense`     | `1.0`   | —       | `+1.0` counterclockwise, `-1.0` clockwise                            |
| `circle_trajectory` | `v`         | `0.20`  | m/s     | Linear velocity                                                      |
| `circle_trajectory` | `k`         | `2.0`   | 1/s     | Angular proportional gain                                            |
| `circle_trajectory` | `delta_deg` | `25.0`  | degrees | How far the target point is ahead of the robot                       |
| `circle_control`    | `max_omega` | `2.5`   | rad/s   | Angular velocity limit                                               |

#### Runtime tuning

```bash
ros2 param list /circle_trajectory
ros2 param get /circle_trajectory R
ros2 param set /circle_trajectory R 0.50
ros2 param set /circle_trajectory sense -1.0
ros2 param set /circle_trajectory v 0.30
ros2 param set /circle_trajectory k 2.5
ros2 param set /circle_trajectory delta_deg 30.0
ros2 param set /circle_control max_omega 3.0
```

---

### 5.2 Line follower (`line_follower`)

Makes the Thymio follow a line on the floor using its two bottom infrared sensors, with PID control on rotation and a search routine when the line is lost.

#### How it works

1. **`line_follower_sensor`** (node `line_ground`): reads `/aseba/events/ground_reflected`, converts each raw reading (0–1023) into a darkness value from 0 (floor) to 1 (line) and publishes `LineSensors` on `/line_sensors`. The line position is left darkness − right darkness (positive = line to the left).
2. **`line_follower_error`** (node `line_error`): computes `error = line position − reference`, with reference 0 (line centered). Publishes `LineError` on `/line_error`.
3. **`line_follower_control`** (node `line_control`): when the line is visible, applies PID to the error to set the rotation and reduces the linear velocity as the error grows. When the line is lost, it drives straight for 0.5 s and then turns (0.8 rad/s) toward the side where it last saw the line. If it receives no messages for 1 s, it stops the robot.

#### Topics

| Node           | Inputs                           | Outputs         | Type                                                       |
|:-------------- |:-------------------------------- |:--------------- |:---------------------------------------------------------- |
| `line_ground`  | `/aseba/events/ground_reflected` | `/line_sensors` | `asebaros_msgs/msg/Event` → `project_msgs/msg/LineSensors` |
| `line_error`   | `/line_sensors`                  | `/line_error`   | `project_msgs/msg/LineError`                               |
| `line_control` | `/line_error`                    | `/cmd_vel`      | `geometry_msgs/msg/Twist`                                  |

#### Run

```bash
# Ros2 launch
ros2 launch project follower_line.launch.py \
  device:=ser:name=Thymio \
  simulation:=False \
  emit_ground_raw:=1
```

Monitoring:

```bash
ros2 topic echo /line_sensors
ros2 topic echo /line_error
ros2 topic echo /cmd_vel
```

#### Parameters

| Node           | Parameter           | Default               | Description                                    |
|:-------------- |:------------------- |:--------------------- |:---------------------------------------------- |
| `line_ground`  | `line_value`        | `250.0`               | Raw reading over the line (0–1023)             |
| `line_ground`  | `floor_value`       | `950.0`               | Raw reading over the floor (0–1023)            |
| `line_ground`  | `lost_level`        | `0.3`                 | Minimum darkness to consider the line detected |
| `line_control` | `kp` / `ki` / `kd`  | `0.8` / `0.0` / `0.0` | PID gains                                      |
| `line_control` | `forward_speed`     | `0.3`                 | Linear velocity with the line centered (m/s)   |
| `line_control` | `turn_linear_speed` | `0.5`                 | Linear velocity at maximum error (m/s)         |

#### Runtime tuning

```bash
ros2 param list /line_control
ros2 param get /line_control kp
ros2 param set /line_control kp 1.2
ros2 param set /line_control forward_speed 0.2
ros2 param set /line_ground line_value 300.0
ros2 param set /line_ground floor_value 900.0
```

---

### 5.3 Object follower (`object_follower`)

Makes the Thymio follow an object detected by the front proximity sensors, keeping a reference distance and angle (by default, the object centered in front). It uses PD control for linear velocity and proportional control for angular velocity.

#### How it works

1. **`object_sensor`** (node `distance`): reads `/proximity/laser`, ignores beams with no intensity, treats saturated beams as being at minimum distance and computes the intensity-weighted midpoint of the beams. Publishes the object's distance and angle on `/object_position` every 0.5 s. With no object, it sends `distance_linear = -1.0`.
2. **`object_error`** (node `error_distance`): computes `distance error = measured distance − desired distance` (positive = object farther than the target) and the angular error relative to the desired angle, with no jumps at the ±180° wraparound. Publishes `Error` on `/error`. With no object, it propagates `error_linear = -1.0`.
3. **`object_control`** (node `object_follower`): PD on distance, saturated at `linear_speed_max` (allows reversing if the object is too close), and proportional gain on the angle (effective gain = `K_angle` × `K_prop_angular`). With no object, it stops the robot. A watchdog publishes zero velocity if no messages arrive for 1 s.

#### Topics

| Node             | Inputs             | Outputs            | Type                                                                |
|:---------------- |:------------------ |:------------------ |:------------------------------------------------------------------- |
| `object_sensor`  | `/proximity/laser` | `/object_position` | `sensor_msgs/msg/LaserScan` → `project_msgs/msg/LocalizationObject` |
| `object_error`   | `/object_position` | `/error`           | `LocalizationObject` → `project_msgs/msg/Error`                     |
| `object_control` | `/error`           | `/cmd_vel`         | `Error` → `geometry_msgs/msg/Twist`                                 |

#### Run

```bash
ros2 launch project ollower_object.launch.py \
  device:=ser:name=Thymio \
  simulation:=False \
  distance_target:=0.14 \
  angle_target:=0.0
```

Monitoring:

```bash
ros2 topic echo /object_position   # object distance and angle
ros2 topic echo /error             # distance and angle errors
ros2 topic echo /cmd_vel
```

#### Parameters

**Launch arguments**

| Argument          | Default           | Unit | Description                           |
|:----------------- |:----------------- |:---- |:------------------------------------- |
| `device`          | `ser:name=Thymio` | —    | Thymio device                         |
| `simulation`      | `False`           | —    | Simulation mode                       |
| `emit_ground_raw` | `1`               | —    | Passed on to `thymio_driver`          |
| `distance_target` | `0.14`            | m    | Desired distance to the object        |
| `angle_target`    | `0.0`             | rad  | Desired angle (`0.0` = object ahead)  |

**Node parameters**

| Node               | Parameter              | Default             | Unit  | Description                                                           |
|:------------------ |:---------------------- |:------------------- |:----- |:--------------------------------------------------------------------- |
| `/distance`        | `saturation_intensity` | `4600.0`            | —     | Intensity at or above which the sensor is considered saturated (0–5000) |
| `/error_distance`  | `distance_target`      | `0.14` (via launch) | m     | Target distance                                                       |
| `/error_distance`  | `angle_target`         | `0.0` (via launch)  | rad   | Target angle                                                          |
| `/object_follower` | `linear_speed_max`     | `1.0`               | m/s   | Maximum linear velocity (0–1)                                         |
| `/object_follower` | `K_prop`               | `5.0`               | 1/s   | Linear proportional gain (0–20)                                       |
| `/object_follower` | `K_deriv`              | `0.3`               | —     | Linear derivative gain (0–2)                                          |
| `/object_follower` | `K_angle`              | `1.0`               | 1/s   | Angular gain (0–5)                                                    |
| `/object_follower` | `K_prop_angular`       | `3.0`               | —     | Extra angular gain (0–10)                                             |

All `/object_follower` parameters are re-read on every message and take effect immediately.

#### Runtime tuning

```bash
ros2 param list /object_follower
ros2 param get /object_follower K_prop
ros2 param set /error_distance distance_target 0.20
ros2 param set /error_distance angle_target -0.30
ros2 param set /object_follower K_prop 3.0
ros2 param set /object_follower K_deriv 0.5
ros2 param set /object_follower linear_speed_max 0.15
ros2 param set /object_follower K_prop_angular 4.0
ros2 param set /distance saturation_intensity 4500.0
```

---

### 5.4 Wall follower (`wall_follower`)

Makes the Thymio follow a wall **on its right**, keeping a reference distance and angle relative to the point on the wall detected by the front sensors. It uses two independent PIDs: one for distance (linear velocity) and one for orientation (angular velocity).

#### How it works

The `object_sensor` and `object_error` nodes are the same as in the [object follower](#53-object-follower-object_follower); only the controller and the target angle differ.

1. **`object_sensor`** (node `distance`): locates the wall and publishes its distance and angle on `/object_position`. Negative angle = right side.
2. **`object_error`** (node `error_distance`): computes `distance error = measured distance − desired distance` and the angular error. Publishes on `/error`. With no wall, it propagates `error_linear = -1.0`.
3. **`wall_follower_control`** (node `Wall_follower`):
   * **Linear velocity:** PID on the distance error, limited to [`lin_min`, `lin_max`]. Near the desired distance (within `near_zero_tol`), the velocity gradually approaches the cruise speed `base_linear_speed`.
   * **Angular velocity:** PID on the orientation error, limited to [`ang_min`, `ang_max`].
   * **Wall lost:** resets the PIDs, stops moving forward and turns right (-0.3 rad/s) until it finds the wall again.

> The side being followed is determined by `angle_target`: the default `-0.60` rad (≈ -34°) places the wall to the right and slightly ahead. A positive value would make the robot follow a wall on the left, but the lost-wall search would still turn right.

#### Topics

| Node                    | Inputs                             | Outputs            | Type                                                                |
|:----------------------- |:---------------------------------- |:------------------ |:------------------------------------------------------------------- |
| `object_sensor`         | `/proximity/laser`                 | `/object_position` | `sensor_msgs/msg/LaserScan` → `project_msgs/msg/LocalizationObject` |
| `object_error`          | `/object_position`                 | `/error`           | `LocalizationObject` → `project_msgs/msg/Error`                     |
| `wall_follower_control` | `/error` (parameter `error_topic`) | `/cmd_vel`         | `Error` → `geometry_msgs/msg/Twist`                                 |

#### Run

```bash
ros2 launch project follower_wall.launch.py \
  device:=ser:name=Thymio \
  simulation:=False \
  distance_target:=0.12 \
  angle_target:=-0.60
```

Monitoring:

```bash
ros2 topic echo /object_position
ros2 topic echo /error
ros2 topic echo /cmd_vel
```

#### Parameters

**Launch arguments**

| Argument          | Default           | Unit | Description                          |
|:----------------- |:----------------- |:---- |:------------------------------------ |
| `device`          | `ser:name=Thymio` | —    | Thymio device                        |
| `simulation`      | `False`           | —    | Simulation mode                      |
| `emit_ground_raw` | `1`               | —    | Passed on to `thymio_driver`         |
| `distance_target` | `0.12`            | m    | Desired distance to the wall         |
| `angle_target`    | `-0.60`           | rad  | Desired angle (negative = right side) |

**Node parameters**

| Node              | Parameter                      | Default                 | Unit  | Description                                                     |
|:----------------- |:------------------------------ |:----------------------- |:----- |:--------------------------------------------------------------- |
| `/distance`       | `saturation_intensity`         | `4600.0`                | —     | Sensor saturation intensity (0–5000)                            |
| `/error_distance` | `distance_target`              | `0.12`                  | m     | Target distance                                                 |
| `/error_distance` | `angle_target`                 | `-0.60` (via launch)    | rad   | Target angle                                                    |
| `/Wall_follower`  | `error_topic`                  | `/error`                | —     | Input error topic                                               |
| `/Wall_follower`  | `base_linear_speed`            | `0.08`                  | m/s   | Cruise speed when the distance error ≈ 0                        |
| `/Wall_follower`  | `near_zero_tol`                | `0.03`                  | m     | Error range in which the velocity tends toward the cruise speed |
| `/Wall_follower`  | `lin_kp` / `lin_ki` / `lin_kd` | `2.0` / `0.05` / `0.08` | —     | Linear PID gains                                                |
| `/Wall_follower`  | `lin_min` / `lin_max`          | `-0.05` / `0.10`        | m/s   | Linear velocity limits                                          |
| `/Wall_follower`  | `ang_kp` / `ang_ki` / `ang_kd` | `2.0` / `0.0` / `0.2`   | —     | Angular PID gains                                               |
| `/Wall_follower`  | `ang_min` / `ang_max`          | `-1.5` / `1.5`          | rad/s | Angular velocity limits                                         |

> **Warning:** the PID gains (`lin_k*`, `ang_k*`) are read **only at startup**; changing them with `ros2 param set` only takes effect after restarting the node. In contrast, `base_linear_speed`, `near_zero_tol`, `lin_min` and `lin_max` can be changed in real time.

#### Runtime tuning

```bash
ros2 param list /error_distance
ros2 param get /Wall_follower base_linear_speed
ros2 param set /error_distance distance_target 0.10
ros2 param set /error_distance angle_target -0.80
ros2 param set /Wall_follower base_linear_speed 0.06
ros2 param set /Wall_follower near_zero_tol 0.04
ros2 param set /Wall_follower lin_max 0.08
ros2 param set /distance saturation_intensity 4500.0
```

---

## 6. Modular nodes

Quick reference for each node. For each one: layer, executable (`setup.py`), node name in the launch file and source file.

### 6.1 Sensor

#### `circle_sensor`

**Executable:** `circle_sensor` · **Node:** `circle_sensor` · **File:** `project/sensor/circle_sensor.py`

Converts odometry into a simple pose (x, y, heading angle).

| Direction | Topic           | Type                       |
|:--------- |:--------------- |:-------------------------- |
| Input     | `/odom`         | `nav_msgs/msg/Odometry`    |
| Output    | `/robot_pose2d` | `geometry_msgs/msg/Pose2D` |

* No parameters.
* Copies x and y and converts the quaternion into a planar angle (`yaw`), stored in `theta`.

```bash
ros2 run project circle_sensor
ros2 topic echo /robot_pose2d
```

#### `object_sensor`

**Executable:** `object_sensor` · **Node:** `distance` · **File:** `project/sensor/object_sensor.py`

Locates the object or wall in front of the robot. Used by the object and wall followers.

| Direction | Topic              | Type                                  |
|:--------- |:------------------ |:------------------------------------- |
| Input     | `/proximity/laser` | `sensor_msgs/msg/LaserScan`           |
| Output    | `/object_position` | `project_msgs/msg/LocalizationObject` |

| Parameter              | Default  | Description                                                           |
|:---------------------- |:-------- |:--------------------------------------------------------------------- |
| `saturation_intensity` | `4600.0` | Intensity at or above which the sensor is treated as saturated (0–5000) |

* Ignores beams with no intensity; saturated beams are assigned the sensor's minimum distance.
* Computes the intensity-weighted midpoint of the beams and extracts distance and angle.
* Publishes every 0.5 s. With no object, it sends `distance_linear = -1.0`.

```bash
ros2 run project object_sensor
ros2 topic echo /object_position
ros2 param set /distance saturation_intensity 4500.0
```

#### `line_sensors`

**Executable:** `line_follower_sensor` · **Node:** `line_ground` · **File:** `project/sensor/line_sensors_node.py`

Converts the ground sensor readings into a darkness level and indicates which side the line is on.

| Direction | Topic                            | Type                                                        |
|:--------- |:-------------------------------- |:----------------------------------------------------------- |
| Input     | `/aseba/events/ground_reflected` | `asebaros_msgs/msg/Event` (`data[0]` left, `data[1]` right) |
| Output    | `/line_sensors`                  | `project_msgs/msg/LineSensors`                              |

| Parameter     | Default | Description                                    |
|:------------- |:------- |:---------------------------------------------- |
| `line_value`  | `250.0` | Raw reading over the line (0–1023)             |
| `floor_value` | `950.0` | Raw reading over the floor (0–1023)            |
| `lost_level`  | `0.3`   | Minimum darkness to consider the line detected |

* Darkness ranges from 0 (floor) to 1 (line) and is clamped to that interval.
* `line_position` = left darkness − right darkness (positive = line to the left).
* `line_detected` is true if at least one sensor exceeds `lost_level`.
* Rejects any `ros2 param set` that would make `line_value` equal to `floor_value`.

```bash
ros2 run project line_follower_sensor
ros2 topic echo /line_sensors
ros2 param set /line_ground line_value 250.0
```

### 6.2 Nav

#### `circle_error`

**Executable:** `circle_error` · **Node:** `circle_error` · **File:** `project/nav/circle_error.py`

Computes how far the robot is from the target point and which way it needs to turn.

| Direction | Topic             | Type                                                                                      |
|:--------- |:----------------- |:----------------------------------------------------------------------------------------- |
| Input     | `/robot_pose2d`   | `geometry_msgs/msg/Pose2D`                                                                |
| Input     | `/target_point`   | `geometry_msgs/msg/Pose2D`                                                                |
| Output    | `/tracking_error` | `geometry_msgs/msg/Vector3` (`x`: distance, `y`: angular error, `z`: direction to target) |

* No parameters. Publishes only after receiving both the pose and the target.
* Angular error = direction to target − robot heading, normalized to between -180° and 180°.

```bash
ros2 run project circle_error
ros2 topic echo /tracking_error
```

#### `circle_trajectory`

**Executable:** `circle_trajectory` · **Node:** `circle_trajectory` · **File:** `project/nav/circle_trajectory.py`

Generates the target point that moves ahead of the robot on the circle and counts laps.

| Direction | Topic           | Type                                                          |
|:--------- |:--------------- |:------------------------------------------------------------- |
| Input     | `/robot_pose2d` | `geometry_msgs/msg/Pose2D`                                    |
| Output    | `/target_point` | `geometry_msgs/msg/Pose2D`                                    |
| Output    | `/circle_state` | `std_msgs/msg/Float64MultiArray` = `[phi, laps, v, k, sense]` |

| Parameter   | Default | Description                                            |
|:----------- |:------- |:------------------------------------------------------ |
| `cx`, `cy`  | `nan`   | Center (`nan` = set at the first pose, `R` from the robot) |
| `R`         | `0.30`  | Radius (m); minimum 0.05                               |
| `sense`     | `1.0`   | `+1` counterclockwise, `-1` clockwise                  |
| `v`         | `0.08`  | Linear velocity (m/s), passed on to the controller     |
| `k`         | `2.0`   | Angular gain, passed on to the controller              |
| `delta_deg` | `25.0`  | Angular lead of the target point (degrees)             |

* All parameters can be changed in real time.
* Counts laps by summing angle changes, without errors at the ±180° crossing.

```bash
ros2 run project circle_trajectory
ros2 topic echo /circle_state
ros2 param set /circle_trajectory R 0.40
```

#### `line_error`

**Executable:** `line_follower_error` · **Node:** `line_error` · **File:** `project/nav/line_error_node.py`

Computes the line's position error relative to the center of the robot.

| Direction | Topic           | Type                           |
|:--------- |:--------------- |:------------------------------ |
| Input     | `/line_sensors` | `project_msgs/msg/LineSensors` |
| Output    | `/line_error`   | `project_msgs/msg/LineError`   |

* No parameters (reference fixed at 0.0, line centered).
* `error = line position − reference` (positive = line to the left). Passes through `header` and `line_detected`.

```bash
ros2 run project line_follower_error
ros2 topic echo /line_error
```

#### `object_error`

**Executable:** `object_error` (as spelled in `setup.py`) · **Node:** `error_distance` · **File:** `project/nav/error_object_sensor.py`

Compares the position of the object or wall with the desired one. Used by the object and wall followers.

| Direction | Topic              | Type                                  |
|:--------- |:------------------ |:------------------------------------- |
| Input     | `/object_position` | `project_msgs/msg/LocalizationObject` |
| Output    | `/error`           | `project_msgs/msg/Error`              |

| Parameter         | Default                          | Description          |
|:----------------- |:-------------------------------- |:-------------------- |
| `distance_target` | `0.12` (object launch: `0.14`)   | Desired distance (m) |
| `angle_target`    | `0.0` (wall launch: `-0.60`)     | Desired angle (rad)  |

* `linear error = measured distance − desired distance` (positive = farther than the target).
* The angular error is computed with no jumps at the ±180° wraparound; the sine and cosine of the error are also published.
* With no object, publishes `error_linear = -1.0` and zeroed angular errors.

```bash
ros2 run project object_error
ros2 topic echo /error
ros2 param set /error_distance distance_target 0.20
```

### 6.3 Control

#### `circle_control`

**Executable:** `circle_control` · **Node:** `circle_control` · **File:** `project/control/circle_control.py`

Turns the robot toward the target point using proportional control and drives at constant speed.

| Direction | Topic             | Type                                                       |
|:--------- |:----------------- |:---------------------------------------------------------- |
| Input     | `/tracking_error` | `geometry_msgs/msg/Vector3` (uses `y`, the angular error)  |
| Input     | `/circle_state`   | `std_msgs/msg/Float64MultiArray` (uses `v` and `k`)        |
| Output    | `/cmd_vel`        | `geometry_msgs/msg/Twist`                                  |

| Parameter   | Default | Description                    |
|:----------- |:------- |:------------------------------ |
| `max_omega` | `2.5`   | Angular velocity limit (rad/s) |

* `v` and `k` come from `circle_trajectory` (initial values 0.08 and 2.0).
* Angular velocity = `k` × angular error, limited to `max_omega`.
* Has no watchdog.

```bash
ros2 run project circle_control
ros2 param set /circle_control max_omega 3.0
```

#### `line_control`

**Executable:** `line_follower_control` · **Node:** `line_control` · **File:** `project/control/line_control_node.py`

Turns the line error into velocities, with PID on rotation and a search routine when the line is lost.

| Direction | Topic         | Type                         |
|:--------- |:------------- |:---------------------------- |
| Input     | `/line_error` | `project_msgs/msg/LineError` |
| Output    | `/cmd_vel`    | `geometry_msgs/msg/Twist`    |

| Parameter           | Default               | Description                                  |
|:------------------- |:--------------------- |:-------------------------------------------- |
| `kp` / `ki` / `kd`  | `0.8` / `0.0` / `0.0` | PID gains                                    |
| `forward_speed`     | `0.3`                 | Linear velocity with the line centered (m/s) |
| `turn_linear_speed` | `0.5`                 | Linear velocity at maximum error (m/s)       |

* **Line visible:** the PID sets the rotation; the linear velocity varies with the size of the error.
* **Line lost:** drives straight for 0.5 s, then turns (0.8 rad/s) toward the side of the last detection.
* **Watchdog:** if no messages arrive for 1 s, publishes zero velocity. The robot also stops when the node shuts down.
* Parameters are re-read on every message.

```bash
ros2 run project line_follower_control
ros2 param set /line_control kp 0.6
```

#### `wall_follower_control`

**Executable:** `wall_follower_control` · **Node:** `Wall_follower` · **File:** `project/control/wall_follower_control.py`

Keeps the robot parallel to a wall on its right, at a fixed distance, using two PIDs.

| Direction | Topic                              | Type                      |
|:--------- |:---------------------------------- |:------------------------- |
| Input     | `/error` (parameter `error_topic`) | `project_msgs/msg/Error`  |
| Output    | `/cmd_vel`                         | `geometry_msgs/msg/Twist` |

Parameters: see [section 5.4](#54-wall-follower-wall_follower).

* Linear PID on the distance error; near the target, the velocity tends toward the cruise speed.
* Angular PID on the orientation error.
* Wall lost (`error_linear = -1.0`): resets the PIDs, stops moving forward and turns right (-0.3 rad/s).
* PID gains are read only at startup; the other parameters can be changed in real time.

```bash
ros2 run project wall_follower_control
ros2 param set /Wall_follower base_linear_speed 0.06
```

#### `object_control`

**Executable:** `object_control` · **Node:** `object_follower` · **File:** `project/control/object_follower_control.py`

Maintains distance and angle relative to an object: PD on linear velocity and proportional control on angular velocity.

| Direction | Topic      | Type                      |
|:--------- |:---------- |:------------------------- |
| Input     | `/error`   | `project_msgs/msg/Error`  |
| Output    | `/cmd_vel` | `geometry_msgs/msg/Twist` |

Parameters: see [section 5.3](#53-object-follower-object_follower).

* Object farther than the target: moves forward; closer: backs up.
* No object (`error_linear = -1.0`): stops and clears the derivative memory.
* **Timeout:** if no messages arrive for 1 s, publishes zero velocity. The robot also stops when the node shuts down.
* All parameters take effect immediately after `ros2 param set`.

```bash
ros2 run project object_control
ros2 param set /object_follower K_prop 3.0
```

---

## 7. Custom messages (`project_msgs`)

| Message              | Fields                                                                              | Use                                                                                                        |
|:-------------------- |:----------------------------------------------------------------------------------- |:---------------------------------------------------------------------------------------------------------- |
| `CircleState`        | `phi`, `laps`, `v`, `k`, `sense`                                                    | Circular trajectory state (the code currently uses `Float64MultiArray` instead)                            |
| `Error`              | `header`, `error_linear`, `error_angular`, `error_angular_sen`, `error_angular_cos` | Distance and orientation error for object or wall following (`error_linear = -1.0` = nothing detected)     |
| `LineError`          | `header`, `error`, `line_detected`                                                  | Line position error                                                                                        |
| `LineSensors`        | `header`, `left_darkness`, `right_darkness`, `line_position`, `line_detected`       | Processed ground sensor readings                                                                           |
| `LocalizationObject` | `header`, `distance_linear`, `distance_angular`, `sen_angular`, `cos_angular`       | Distance and angle of the detected object (`distance_linear = -1.0` = nothing detected)                    |

---

## 8. References

* [ROS 2 Jazzy documentation](https://docs.ros.org/en/jazzy/)
* [ros-aseba](https://github.com/jeguzzi/ros-aseba)
* [ros-thymio](https://github.com/jeguzzi/ros-thymio)
