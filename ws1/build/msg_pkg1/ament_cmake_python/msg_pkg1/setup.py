from setuptools import find_packages
from setuptools import setup

setup(
    name='msg_pkg1',
    version='0.0.0',
    packages=find_packages(
        include=('msg_pkg1', 'msg_pkg1.*')),
)
