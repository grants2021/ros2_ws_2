from setuptools import setup
from glob import glob

package_name = 'ros2_robotx'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name, glob('launch/*')),
        ('lib/' + package_name, glob('include/*'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='grant',
    maintainer_email='98931574+grants2021@users.noreply.github.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'drone_control = ros2_robotx.drone_control:main',
            'teleop_key = ros2_robotx.teleop_key:main',
            'wamv_sim = ros2_robotx.wamv_sim:main'
        ],
    },
)
