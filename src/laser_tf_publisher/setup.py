from setuptools import find_packages, setup

package_name = 'laser_tf_publisher'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='root',
    maintainer_email='root@todo.todo',
    description='A ROS 2 package for publishing static transform from base_footprint to laser frame',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'static_laser_tf_broadcaster = laser_tf_publisher.static_tf_broadcaster:main',
        ],
    },
)