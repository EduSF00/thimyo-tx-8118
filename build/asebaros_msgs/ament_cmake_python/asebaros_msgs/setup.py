from setuptools import find_packages
from setuptools import setup

setup(
    name='asebaros_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('asebaros_msgs', 'asebaros_msgs.*')),
)
