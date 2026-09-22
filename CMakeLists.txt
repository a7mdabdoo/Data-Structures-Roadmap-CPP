cmake_minimum_required(VERSION 3.15)
project(Data_Structure CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ==============================================================================
# 🚀 1. Active Scratchpad (Root main.cpp)
# ==============================================================================
add_executable(main main.cpp)

# ==============================================================================
# 🟢 2. Day 01: Complexity (Big-O) & Array-Based Stack
# ==============================================================================
add_executable(Day01_Task01_Stack_Array 
    Day01_Stack_and_Complexity/tasks/Task01_Stack_Array.cpp
)
