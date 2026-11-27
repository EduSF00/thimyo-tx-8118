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

    cx_arg = DeclareLaunchArgument(
        'cx',
        default_value='nan',
        description='Centro X do círculo (m); nan inicializa em relação ao robô',
    )
    cy_arg = DeclareLaunchArgument(
        'cy',
        default_value='nan',
        description='Centro Y do círculo (m); nan inicializa em relação ao robô',
    )
    radius_arg = DeclareLaunchArgument(
        'R',
        default_value='0.40',
        description='Raio do círculo (m)',
    )
    sense_arg = DeclareLaunchArgument(
        'sense',
        default_value='1.0',
        description='Sentido da trajetória (+1.0 anti-horário, -1.0 horário)',
    )
    v_arg = DeclareLaunchArgument(
        'v',
        default_value='0.20',
        description='Velocidade linear nominal (m/s)',
    )
    k_arg = DeclareLaunchArgument(
        'k',
        default_value='1.0',
        description='Ganho proporcional angular (sobre o desvio; feedforward v/R é automático)',
    )
    delta_deg_arg = DeclareLaunchArgument(
        'delta_deg',
        default_value='45.0',
        description='Avanço angular delta no círculo (graus); maior = mais suave/estável',
    )
    max_omega_arg = DeclareLaunchArgument(
        'max_omega',
        default_value='2.5',
        description='Saturação máxima de velocidade angular (rad/s)',
    )

    circle_sensor = Node(
        package='project',
        executable='circle_sensor',
        name='circle_sensor',
        output='screen',
    )
    circle_trajectory = Node(
        package='project',
        executable='circle_trajectory',
        name='circle_trajectory',
        output='screen',
        parameters=[{
            'cx': LaunchConfiguration('cx'),
            'cy': LaunchConfiguration('cy'),
            'R': LaunchConfiguration('R'),
            'sense': LaunchConfiguration('sense'),
            'v': LaunchConfiguration('v'),
            'k': LaunchConfiguration('k'),
            'delta_deg': LaunchConfiguration('delta_deg'),
        }],
    )
    circle_error = Node(
        package='project',
        executable='circle_error',
        name='circle_error',
        output='screen',
    )
    circle_control = Node(
        package='project',
        executable='circle_control',
        name='circle_control',
        output='screen',
        parameters=[{
            'max_omega': LaunchConfiguration('max_omega'),
        }],
    )

    return LaunchDescription([
        cx_arg,
        cy_arg,
        radius_arg,
        sense_arg,
        v_arg,
        k_arg,
        delta_deg_arg,
        max_omega_arg,
        device_arg,
        simulation_arg,
        emit_ground_raw_arg,
        thymio_driver_launch,
        circle_sensor,
        circle_trajectory,
        circle_error,
        circle_control,
    ])