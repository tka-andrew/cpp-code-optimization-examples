cmake_minimum_required(VERSION 3.10)

# set the project name
project(CppCodeOptimizationExamples VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(Sources
    src/main.cpp
    src/simpleProfilingTemplate.cpp
    src/testLoopUnrolling.cpp
)

# add the executable
add_executable(${PROJECT_NAME} ${Sources})