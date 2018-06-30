# cmake_minimum_required(VERSION <specify CMake version here>)
project(algo)

set(CMAKE_CXX_STANDARD 11)

add_executable(algo src/Test.cpp header/Test.h src/Frq.cpp header/Frq.h main.cpp src/Hello.cpp header/Hello.h header/common.h src/Pratice.cpp header/Pratice.h src/Calc.cpp src/Node.cpp src/DFS.cpp src/BTree.cpp src/Fraction.cpp header/Fraction.h src/BFS.cpp src/Maze.cpp src/Factor.cpp)