from setuptools import find_packages, setup

package_name = 'demo_pubsub_pkg'

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
    maintainer='user',
    maintainer_email='user@todo.todo',
    description='Package for C++ and Python Publisher/Subscriber ROS 2',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'publisher_py = demo_pubsub_pkg.publisher_py:main',
            'subscriber_py = demo_pubsub_pkg.subscriber_py:main',
        ],
    },
)
