from setuptools import find_packages, setup

package_name = 'hare_web'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/systemd', [
            'systemd/hare-ros.service',
            'systemd/hare-web.service',
        ]),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='hare',
    maintainer_email='hare.westinghouse@gmail.com',
    description='Read-only Hare VESC status web page',
    license='TODO: License declaration',
    entry_points={
        'console_scripts': [
            'status_server = hare_web.status_server:main',
        ],
    },
)
