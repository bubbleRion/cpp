from setuptools import find_packages , Extension, setup
from glob import glob
from os.path import basename, splitext

module = Extension("mymodule", sources=['./basic/mymodule.c'])
setup(
    name = 'mymodule',
    version='1.0', 
    ext_modules=[module],
    # packages=find_packages(where='basic'),
    # package_dir={'': 'basic'},
    # py_modules=[splitext(basename(path))[0] for path in glob('basic/*.py')]
)

# poetry
# uv