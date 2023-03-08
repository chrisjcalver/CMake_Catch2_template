# CMakeLists.txt
cmake_minimum_required(VERSION 3.22)   

# Declare our project
project("New_project") 

find_package(Catch2 REQUIRED)

# Add our main executable

add_executable(${PROJECT_NAME} src/main.cpp)

# set C++ version for both targets
target_compile_features("${PROJECT_NAME}" PRIVATE cxx_std_20)

option(BUILD_TESTING "Builds only the test executable." OFF)
option(CODE_COVERAGE "Collect coverage from test library" OFF)

target_link_libraries(${PROJECT_NAME} Catch2::Catch2WithMain)

set(CMAKE_CXX_FLAGS " ${CMAKE_CXX_FLAGS} --coverage")
