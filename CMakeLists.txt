# CMakeList.txt : CMake project for AmberinoEngine, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 17)          # request C++17
set(CMAKE_CXX_STANDARD_REQUIRED ON) # require it
set(CMAKE_CXX_EXTENSIONS OFF)       # optional: disable compiler-specific extensions

project (AmberinoEngine)

find_package(glm CONFIG REQUIRED)
find_package(SDL3 CONFIG REQUIRED)

# Add source to this project's executable.
add_executable (AmberinoEngine src/main.cpp)

target_link_libraries(AmberinoEngine PRIVATE glm::glm)
target_link_libraries(AmberinoEngine PRIVATE SDL3::SDL3)