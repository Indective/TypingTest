cmake_minimum_required(VERSION 3.10)
project(TypingTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})

add_executable(TypingTest src/main.cpp src/typing.cpp)