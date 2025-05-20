from setuptools import find_packages, setup

package_name = 'py_pkg2'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools', 'example_interfaces'],
    zip_safe=True,
    maintainer='hawx',
    maintainer_email='hawx@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'server1 = py_pkg2.srv_node1:main',
            'client1 = py_pkg2.cli_node1:main',
        ],
    },
)
