from setuptools import find_packages, setup

package_name = 'py_pkg1'

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
    maintainer='hawx',
    maintainer_email='hawx@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'talker1 = py_pkg1.pub_node1:main',
            'listener1 = py_pkg1.sub_node1:main',
        ],
    },
)
