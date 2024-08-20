from setuptools import find_packages
from setuptools import setup

setup(
    name='prototype_msg',
    version='0.0.0',
    packages=find_packages(
        include=('prototype_msg', 'prototype_msg.*')),
)
