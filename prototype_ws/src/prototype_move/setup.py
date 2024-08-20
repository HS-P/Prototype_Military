import os
from setuptools import find_packages, setup
from glob import glob

package_name = 'prototype_move'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='hansol',
    maintainer_email='hansol@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'move = prototype_move.robot_1:main',
            'lidar_filter = prototype_move.lidar:main',
            'action = prototype_move.odom_action_server:main',
            'test = prototype_move.odometry:main',
            'real_move = prototype_move.real_auto:main',
            'DWMR = prototype_move.lecture:main',
        ],
    },
)
