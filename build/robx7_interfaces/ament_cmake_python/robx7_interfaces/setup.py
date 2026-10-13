from setuptools import find_packages
from setuptools import setup

setup(
  name='robx7_interfaces',
  version='0.0.0',
  packages=find_packages(
      include=('robx7_interfaces', 'robx7_interfaces.*')),
)
