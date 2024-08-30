@echo off
echo Running CMake command...
cmake -S ./ -B ./build -G "MinGW Makefiles"
if %ERRORLEVEL% neq 0 (
    echo CMake build failed!
    pause
) else (
    echo CMake build succeeded!
)

cmake --build ./build --target clean
if %ERRORLEVEL% neq 0 (
    echo g++ clean failed!
    pause
) else (
    echo g++ clean succeeded!
)
