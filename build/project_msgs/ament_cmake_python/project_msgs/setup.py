from setuptools import find_packages
from setuptools import setup

setup(
    name='project_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('project_msgs', 'project_msgs.*')),
)
