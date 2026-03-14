from setuptools import find_packages
from setuptools import setup

setup(
    name='hare_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('hare_msgs', 'hare_msgs.*')),
)
