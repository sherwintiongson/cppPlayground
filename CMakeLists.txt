message(STATUS "--------- Running CMakeList.txt ------------")

# Set the minimum version of cmake
cmake_minimum_required(VERSION 3.30)

# Set the project name and version
project(CPPPLAYGROUND VERSION 1.0)

# Specifies the C++ standard to be used and compiler
set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe")  # point this to the specific compiler 
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Provide feedback on the compiler and standard
message(STATUS "Compiling using ${CMAKE_CXX_COMPILER}")
message(STATUS "C++ Language Standard: C++${CMAKE_CXX_STANDARD}")

# Collect source files into cmake variable called "SOURCES"
set(SOURCES
    src/main.cpp
    src/functions/function.cpp
    src/functions/function_test.cpp
    src/arrays_vectors/arrays_vectors.cpp
    src/arrays_vectors/arrays_vectors_test.cpp
    src/basicsOfClass/house.cpp
    src/basicsOfClass/house_test.cpp
    src/exceptionClass/exceptionClass.cpp
    src/exceptionClass/exceptionClass_test.cpp
    src/reviewCppOop/reviewCppOop.cpp
    src/reviewCppOop/reviewCppOopTest.cpp
    src/reviewCppOop/derivedClass.cpp
    src/static_member/static_member.cpp
    src/static_member/static_member_test.cpp
    src/enum_class/enum_class.cpp
    src/templates/templates.cpp
)

# Collect header files into cmake variable called "HEADERS"
set(HEADERS
    src/main.hpp
    src/functions/function.hpp
    src/functions/function_test.hpp
    src/arrays_vectors/arrays_vectors.hpp
    src/arrays_vectors/arrays_vectors_test.hpp
    src/exceptionClass/exceptionClass.hpp
    src/exceptionClass/exceptionClass_test.hpp
    src/reviewCppOop/reviewCppOop.hpp
    src/reviewCppOop/reviewCppOopTest.hpp
    src/reviewCppOop/derivedClass.hpp
    src/static_member/static_member.hpp
    src/static_member/static_member_test.hpp
    src/enum_class/enum_class.hpp
    src/templates/templates.hpp
)

# Define the executable
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# Specify include directories
target_include_directories(${PROJECT_NAME} PUBLIC 
./src/arrays_vectors
./src/functions
./src/basicsOfClass
./src/exceptionClass
./src/reviewCppOop
./src/static_member
./src/enum_class
./src/templates
)

# Disable optimization for debug builds and add compiler warnings
# Treat all enabled warnings (-Wall, -Wextra, -Wpedantic) as errors
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic -Werror -O0)
endif()

# Add additional information about the project and system
message(STATUS "Project name: ${PROJECT_NAME}, Version: ${PROJECT_VERSION}")
message(STATUS "CMake version: ${CMAKE_VERSION}")
message(STATUS "--------- End of CMakeList.txt ------------")
