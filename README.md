Cmake sample using gtest, gmock and boost.
====

This is a sample of cmake with gtest, gmock and boost.

## Description
* Gtest, gmock and boost are included as git submodule.
* Gtest, gmock and boost are build with cmake.

Directory structure are below:
```
.
├── project
│   ├── target
│   │   └── folder
│   ├── target2
│   │   └── folder
│   ├── target2_test
│   │   └── folder
│   │       └── mock
│   └── target_test
│       └── folder
│           └── mock
├── submodule
│   ├── boost
│   │   └── numeric
│   │       └── ublas
│   └── googletest
│       ├── googlemock
│       └── googletest
```

## Requirement
* cmake
* git

## Usage
```shell
cmake .
make
```

if you want to execute tests:
```shell
make test
```

or

```shell
ctest -V
```

`make_file_list.sh` generates sources and headers lists for cmake.
With the following command, `name_of_target.cmake`, which contains lists of sources and headers, is generated.
```shell
sh make_file_list.sh path/to/target name_of_target
```

For instance, if you want to generate `target.cmake` in this repository, execute below:
```shell
sh make_file_list.sh project/target target
```

## Install
```shell
git clone https://github.com/i05nagai/cmake_template.git
```

## Licence

[MIT](https://opensource.org/licenses/MIT)

## Author

[i05nagai](https://github.com/i05nagai)
