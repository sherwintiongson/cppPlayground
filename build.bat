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
    echo Clean failed!
) else (
    echo Clean succeeded!
)

cmake --build ./build
if %ERRORLEVEL% neq 0 (
    echo Compiler build failed!
) else (
    echo Compiler build succeeded!
)

pause
