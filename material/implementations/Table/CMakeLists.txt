
# # Minimum required version of CMake
# cmake_minimum_required(VERSION 3.10)

# # Define global variables for the project and executable names
# set(PROJECT_NAME TableProject)
# set(EXE_NAME Table)

# # Set the project name and version
# project(${PROJECT_NAME} VERSION 1.0 LANGUAGES CXX)

# # Set the C++ standard
# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_STANDARD_REQUIRED True)
# # set(CMAKE_PREFIX_PATH "C:\\tools\\vcpkg\\installed\\x64-windows\\share")


# # Define paths for source files and headers
# set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/source)
# set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# # Include directories
# include_directories(${INCLUDE_DIR})

# # Collect source files for the library
# file(GLOB LIB_SOURCES "${SOURCE_DIR}/*.cpp")

# # Add the library
# add_library(tableLIB STATIC ${LIB_SOURCES})

# # Collect source files for the executable
# file(GLOB EXE_SOURCES "${CMAKE_SOURCE_DIR}/main.cpp")

# # Add the executable
# add_executable(${EXE_NAME} ${EXE_SOURCES})

# # Link the library to the executable
# target_link_libraries(${EXE_NAME} PRIVATE tableLIB)





# Or use the header-only version
# find_package(fmt CONFIG REQUIRED)
# target_link_libraries(${EXE_NAME} PRIVATE fmt::fmt-header-only)


# # Or use the header-only version
# find_package(fmt CONFIG REQUIRED)
# target_link_libraries(${EXE_NAME} PRIVATE fmt::fmt-header-only)




# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Define global variables for the project and executable names
set(PROJECT_NAME Table)
set(EXE_NAME Table)

# Set the project name and version
project(${PROJECT_NAME} VERSION 1.0 LANGUAGES CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(CMAKE_PREFIX_PATH "C:\\tools\\vcpkg\\installed\\x64-windows\\share")


# Define paths for source files and headers
set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/source)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# Include directories
include_directories(${INCLUDE_DIR})

# Collect source files
file(GLOB SOURCES "${SOURCE_DIR}/*.cpp")

# Add the executable
add_executable(${EXE_NAME} main.cpp)

# Add include directories
target_include_directories(${EXE_NAME} PRIVATE ${INCLUDE_DIR})

# Or use the header-only version
find_package(fmt CONFIG REQUIRED)
target_link_libraries(${EXE_NAME} PRIVATE fmt::fmt-header-only)
