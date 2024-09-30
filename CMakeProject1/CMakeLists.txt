cmake_minimum_required(VERSION 3.10)

# Set the project name
project(CMakeProject1)

# Specify the C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set Boost root path
set(BOOST_ROOT "C:/boost_1_86_0")
set(Boost_USE_STATIC_LIBS ON)  # Use static libraries
set(Boost_USE_MULTITHREADED ON)  # Use multi-threaded libraries
set(Boost_USE_STATIC_RUNTIME OFF) # Use dynamic runtime

# Find Boost libraries
find_package(Boost 1.86 REQUIRED COMPONENTS system filesystem)

# Create the executable target
add_executable(CMakeProject1 
    "main.cpp" 
    "entities/directory.h" "entities/directory.cpp")

target_include_directories(CMakeProject1 PRIVATE .)

# Link Boost libraries to the target
if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    target_link_libraries(CMakeProject1 PRIVATE ${Boost_LIBRARIES})
else()
    message(FATAL_ERROR "Boost not found. Please ensure Boost is installed and the BOOST_ROOT path is set correctly.")
endif()






