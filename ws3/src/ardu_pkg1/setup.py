from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'ardu_pkg1'

# 1. 기본 필수 경로
data_files = [
    ('share/ament_index/resource_index/packages',
     ['resource/' + package_name]),
    ('share/' + package_name, ['package.xml']),
]

# 2. 절대경로(dirname(__file__)) 기반의 launch, urdf 디렉토리
launch_dir = os.path.join(os.path.dirname(__file__), 'launch')
urdf_dir = os.path.join(os.path.dirname(__file__), 'urdf')

# 3. glob을 사용하여 launch, urdf 디렉토리 내의 모든 파일을 가져옴
launch_files = glob(os.path.join(launch_dir, '*.launch.*'))
urdf_files = glob(os.path.join(urdf_dir, "*.urdf.*"))

# 4. data_files에 launch, urdf 디렉토리의 파일들을 추가
# (install 폴더 내 설치할 위치, [현재 경로상 파일 경로])
if launch_files:
    data_files.append(
        (os.path.join('share', package_name, 'launch'), 
         launch_files)
    )

# 주: instal 폴더 내 설치할 위치에서는 description 폴더 없이 바로 urdf 폴더임.
if urdf_files:
    data_files.append(
        (os.path.join('share', package_name, 'urdf'), urdf_files)
    )

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=data_files,
    install_requires=['setuptools', 'pyserial'],
    zip_safe=True,
    maintainer='hawx',
    maintainer_email='hawx@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'servo_con1 = ardu_pkg1.servo_con1:main',
            'servo_sub1 = ardu_pkg1.servo_sub1:main',
            'servo_pub1 = ardu_pkg1.servo_pub1:main',
            'arm1_pub1 = ardu_pkg1.arm1_pub1:main',
            'arm1_sub1 = ardu_pkg1.arm1_sub1:main',
            'arm1_joint_pub1 = ardu_pkg1.arm1_joint_pub1:main',
        ],
    },
)
