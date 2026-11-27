from setuptools import find_packages, setup
import os
from glob import glob


package_name = 'project'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
        (os.path.join('share', package_name, 'config'), glob('config/*.yaml')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='eduardo',
    maintainer_email='edusilvafarias@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0', 
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'follow_object_distance = project.sensor.distance_object:main',
            'follow_object_error = project.nav.object_error:main',
            'follow_object_control = project.control.object_follower_control:main',
            
            'wall_follower_control = project.control.wall_follower_control:main',

            'line_follower_control = project.control.line_control:main',
            'line_follower_sensor = project.sensor.line_sensors:main',
            'line_follower_error = project.nav.line_error:main',

            'circle_sensor = project.sensor.circle_sensor:main',
            'circle_error = project.nav.circle_error:main',
            'circle_trajectory = project.nav.circle_trajectory:main',
            'circle_control = project.control.circle_control:main',
            
        ],
    },
)
