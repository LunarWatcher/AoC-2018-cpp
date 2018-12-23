cmake_minimum_required (VERSION 3.13.2)

# -std=c++17 has to contain an =; otherwise it will not work (it'll be considered two different tokens)
set (CMAKE_CXX_FLAGS "-fexceptions -Wall -Wextra -g -std=c++17")
project(aoc)

file(GLOB_RECURSE AOC_SOURCES "src/*.cpp")
file(GLOB_RECURSE AOC_HEADERS "src/*.h")

set(AOC_DIRS "")

foreach(header ${AOC_HEADERS})
    get_filename_component(dir, ${header} PATH)
    list(APPEND AOC_DIRS ${dir})
endforeach()

list(REMOVE_DUPLICATES AOC_DIRS)

include_directories("src/")
add_executable(aoc ${AOC_SOURCES})
target_include_directories(aoc PRIVATE ${AOC_DIRS})