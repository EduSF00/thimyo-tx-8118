from setuptools import find_packages
from setuptools import setup

setup(
    name='thymio_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('thymio_msgs', 'thymio_msgs.*')),
)
