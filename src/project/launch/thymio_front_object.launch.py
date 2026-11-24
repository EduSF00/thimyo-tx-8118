import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import AnyLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    device_arg = DeclareLaunchArgument(
        'device',
        default_value='ser:name=Thymio',
        description='Dispositivo Thymio (ex.: ser:name=Thymio)',
    )
    simulation_arg = DeclareLaunchArgument(
        'simulation',
        default_value='False',
        description='Modo simulação (True/False)',
    )
    emit_ground_raw_arg = DeclareLaunchArgument(
        'emit_ground_raw',
        default_value='1',
        description='Emite dados crus do sensor de chão',
    )

    thymio_driver_share = get_package_share_directory('thymio_driver')
    # Ajuste o nome do arquivo se no thymio_driver for main.launch.py em vez de main.launch
    thymio_driver_launch_path = os.path.join(
        thymio_driver_share, 'launch', 'main.launch'
    )

    thymio_driver_launch = IncludeLaunchDescription(
        AnyLaunchDescriptionSource(thymio_driver_launch_path),
        launch_arguments={
            'device': LaunchConfiguration('device'),
            'simulation': LaunchConfiguration('simulation'),
            'emit_ground_raw': LaunchConfiguration('emit_ground_raw'),
        }.items(),
    )

    distance_target_arg = DeclareLaunchArgument(
        'distance_target',
        default_value='0.14',
        description='Distância desejada até o objeto (m)',
    )
    angle_target_arg = DeclareLaunchArgument(
        'angle_target',
        default_value='0.0',
        description='Ângulo desejado até o objeto (rad)',
    )

    front_object_node = Node(
        package='project',
        executable='front_object',
        name='object_localization',
        output='screen',
    )
    trajectory_error_node = Node(
        package='project',
        executable='trajectory_error',
        name='trajectory',
        output='screen',
        parameters=[{
            'distance_target': LaunchConfiguration('distance_target'),
            'angle_target': LaunchConfiguration('angle_target'),
        }],
    )

    control_follower = Node(
        package='project',
        executable='control_follow_object',
        name='object_follower',
        output='screen',
    )

    return LaunchDescription([
        angle_target_arg,
        distance_target_arg,
        device_arg,
        simulation_arg,
        emit_ground_raw_arg,
        thymio_driver_launch,
        front_object_node,
        trajectory_error_node,
        control_follower,
    ])