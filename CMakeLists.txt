# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(BowlingGame)

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(include)

# Create executable
add_executable(BowlingGame 
    src/main.cpp 
    src/BowlingGame.cpp 
    src/Frame.cpp
)
