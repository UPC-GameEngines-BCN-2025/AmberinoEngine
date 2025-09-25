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
find_package(imgui REQUIRED)
find_package(glad CONFIG REQUIRED)
find_package(OpenGL REQUIRED)


# Add source to this project's executable.
add_executable (AmberinoEngine src/main.cpp)

target_link_libraries(AmberinoEngine PRIVATE glm::glm)
target_link_libraries(AmberinoEngine PRIVATE SDL3::SDL3)
target_link_libraries(AmberinoEngine PRIVATE imgui::imgui)
target_link_libraries(AmberinoEngine PRIVATE glad::glad)
target_link_libraries(AmberinoEngine PRIVATE OpenGL::GL)

target_compile_options(AmberinoEngine PRIVATE $<$<CXX_COMPILER_ID:MSVC>:/GR->$<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-fno-rtti>)