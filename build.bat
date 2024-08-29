@echo off
echo Running CMake command...
cmake -S ./ -B ./build -G "MinGW Makefiles"
if %ERRORLEVEL% neq 0 (
    echo CMake build failed!
) else (
    echo CMake build succeeded!
)

cmake --build ./build --target clean
if %ERRORLEVEL% neq 0 (
    echo g++ clean failed!
) else (
    echo g++ clean succeeded!
)

cmake --build ./build
if %ERRORLEVEL% neq 0 (
    echo g++ build failed!
) else (
    echo g++ build succeeded!
)
pause

