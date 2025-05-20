from setuptools import find_packages, setup
import os
import glob

package_name = 'pubsub_pkg1'

# launch 파일용 수정 사항 1~6번
# launch 파일을 설치하기 위한 data_files 경로 변경 추가. 런치 아니면 1 ~ 4번, 6번 삭제 후 5번 주석 해재하면 됨.
# 1. data_files 리스트 준비
data_files = [
    ('share/ament_index/resource_index/launch/', ['resource/' + package_name]),
    ('share/' + package_name, ['package.xml']),
]
# 2. launch 파일을 설치하기 위한 data_files 경로 변경 추가
# 현제 파일 경로(os.path.dirname(__file__) 기준으로 launch 폴더 경로 설정
launch_dir = os.path.join(os.path.dirname(__file__), 'launch')
# 3. launch 파일들의 경로 리스트 설정
launch_files = glob.glob(os.path.join(launch_dir, '*.launch.*'))
# 4. data_files에 launch_files 추가
if launch_files:
    data_files.append(
        (os.path.join('share', package_name, 'launch'), launch_files)
    )

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    
    #주: launch 파일용으로 기존 내용을 모두 주석처리하고 변경함.
    #5. 기존 내용 주석처리
    # data_files=[
    #     ('share/ament_index/resource_index/packages',
    #         ['resource/' + package_name]),
    #     ('share/' + package_name, ['package.xml']),
    #     # ('share/' + package_name + '/launch', glob(os.path.join('launch', '*.launch.py')))
    # ], # [(설치할 위치경로, [복사할 파일목록], (경로,[목록])...)]
    # # glob('launch/*.launch.py'): launch에 있는 모든 .launch.py 파일을 찾아서 배열로 리턴하여 설치할 수 있게 해줌.

    # # 그러나, 위처럼 하면 colcon build 시에 pubsub_pkg1을 기준 경로로 잡지 않을 수도 있어서 AssertionError가 발생할 수 있음.

    #6. launch 파일용으로 수정한 내용 대입
    data_files = data_files,

    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='hawx',
    maintainer_email='hawx@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'sub_node1 = pubsub_pkg1.sub_node1:main',
            'pub_node1 = pubsub_pkg1.pub_node1:main',
            'turtle_msg1 = pubsub_pkg1.turtle_msg1:main',
            'turtle_msg2 = pubsub_pkg1.turtle_msg2:main',
            'turtle_msg3 = pubsub_pkg1.turtle_msg3:main',
            'turtle_pub1 = pubsub_pkg1.turtle_pub1:main',
            'turtle_srvr1 = pubsub_pkg1.turtle_srvr1:main',
            'turtle_srvr2 = pubsub_pkg1.turtle_srvr2:main',
            'turtle_srvr3 = pubsub_pkg1.turtle_srvr3:main',
            'action_srvr1 = pubsub_pkg1.action_srvr1:main',
            'action_srvr2 = pubsub_pkg1.action_srvr2:main',
            'action_mthread1 = pubsub_pkg1.action_mthread1:main',
            'act_thread_srvr1 = pubsub_pkg1.act_thread_srvr1:main',
            'act_thread_srvr2 = pubsub_pkg1.act_thread_srvr2:main',
            'act_thread_srvr3 = pubsub_pkg1.act_thread_srvr3:main',
        ],
    },
)
