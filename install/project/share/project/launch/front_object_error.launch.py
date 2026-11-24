from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    saturation_arg = DeclareLaunchArgument(
        'saturation_intensity',
        default_value='4600.0',
        description='Intensidade de saturação do sensor de proximidade',
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
        parameters=[{
            'saturation_intensity': LaunchConfiguration('saturation_intensity'),
        }],
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

    return LaunchDescription([
        saturation_arg,
        distance_target_arg,
        angle_target_arg,
        front_object_node,
        trajectory_error_node,
    ])