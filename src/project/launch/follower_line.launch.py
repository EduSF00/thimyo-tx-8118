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

    line_follower_sensor = Node(
        package='project',
        executable='line_follower_sensor',
        name='line_ground',
        output='screen',
    )

    line_follower_error = Node(
        package='project',
        executable='line_follower_error',
        name='line_error',
        output='screen',
    )

    line_follower_control = Node(
        package='project',
        executable='line_follower_control',
        name='line_control',
        output='screen',
    )


    return LaunchDescription([
        line_follower_sensor,
        line_follower_error,
        line_follower_control,
        device_arg,
        simulation_arg,
        emit_ground_raw_arg,
        thymio_driver_launch,
    ])