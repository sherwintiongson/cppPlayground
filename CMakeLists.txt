message(STATUS "--------- Running CMakeList.txt ------------")

# Set the minimum version of cmake
cmake_minimum_required(VERSION 3.16)

# Set the project name and version
project(CPPPLAYGROUND VERSION 1.0)

# Specifies the C++ standard to be used and compiler
set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Use C++14 standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Provide feedback on the compiler and standard
message(STATUS "Compiling using ${CMAKE_CXX_COMPILER}")
message(STATUS "C++ Language Standard: C++${CMAKE_CXX_STANDARD}")

# Collect source and header files into variables
set(SOURCES
    main.cpp
    arrays_vectors/arrays_vectors.cpp
    arrays_vectors/arrays_vectors_test.cpp
)

set(HEADERS
    main.hpp
    arrays_vectors/arrays_vectors.hpp
    arrays_vectors/arrays_vectors_test.hpp
)

# Define the executable
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# Specify include directories
target_include_directories(${PROJECT_NAME} PUBLIC ./arrays_vectors)

# Disable optimization for debug builds and add compiler warnings
# Treat all enabled warnings (-Wall, -Wextra, -Wpedantic) as errors
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic -Werror -O0)
endif()

# Add additional information about the project and system
message(STATUS "Project name: ${PROJECT_NAME}, Version: ${PROJECT_VERSION}")
message(STATUS "CMake version: ${CMAKE_VERSION}")
message(STATUS "--------- End of CMakeList.txt ------------")
