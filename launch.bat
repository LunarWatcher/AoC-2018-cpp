if not exist build mkdir build
cd build
echo "Starting CMake build."
echo "CMake and Ninja need to be available (through PATH or otherwise accessible from the build directory"

if not exist CMakeFiles goto initCmake
if not exist build.ninja goto initCmake

goto runNinja

:initCmake
    cmake -GNinja ../
    goto runNinja
    
:runNinja
    ninja && aoc.exe
	
cd ..