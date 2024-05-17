from setuptools import find_packages
from setuptools import setup

setup(
    name='epos_action_node',
    version='0.0.0',
    packages=find_packages(
        include=('epos_action_node', 'epos_action_node.*')),
)
