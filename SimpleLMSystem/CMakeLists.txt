cmake_minimum_required(VERSION 3.15.0)
project(SimpleLMSystem VERSION 0.1.0 LANGUAGES  CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(SimpleLMSystem src/main.cpp src/Book.cpp src/Library.cpp)
target_include_directories(SimpleLMSystem PRIVATE include)

