message(STATUS "--------- Running CMakeList.txt ------------")

# Set the minimum version of cmake
cmake_minimum_required(VERSION 3.30)

# Specifies the C++ standard to be used and compiler
set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
message("Compiling using " ${CMAKE_CXX_COMPILER})
message("C++ Language Standard: C++" ${CMAKE_CXX_STANDARD})

# Sets the project name and version
set(PROJECT_VERSION 1.0)
project(CPPPLAYGROUND VERSION ${PROJECT_VERSION})

# Disable optimization
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0")

# Set CMake policies
cmake_policy(SET CMP0074 NEW)

# Define the executable and lists the source and header files.
# target name is "app"
add_executable(app ./main.hpp 
                    ./main.cpp
                    ./arrays_vectors/arrays_vectors.hpp
                    ./arrays_vectors/arrays_vectors.cpp
                    ./arrays_vectors/arrays_vectors_test.hpp
                    ./arrays_vectors/arrays_vectors_test.cpp
              )

# Specifies include directories to use when compiling 
# a given target. The named <target> must have been created 
# by a command such as add_executable()
# target name is "app"
target_include_directories(app PUBLIC ./arrays_vectors
                          )

message(STATUS "--------- End of CMakeList.txt ------------")