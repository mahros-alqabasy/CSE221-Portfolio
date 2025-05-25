# # Minimum version of CMake
# cmake_minimum_required(VERSION 3.15)

# # Project name and type
# project(StackLibrary LANGUAGES CXX)

# # Set the output type to SHARED to build a DLL
# add_library(StackLibrary SHARED
#     source/Stack.cpp
# )

# # Specify the include directories for the library
# target_include_directories(StackLibrary
#     PUBLIC
#     ${CMAKE_CURRENT_SOURCE_DIR}/include
# )

# # Export macro for shared library
# target_compile_definitions(StackLibrary
#     PRIVATE STACKLIB_EXPORTS
# )


#############################################


# cmake_minimum_required(VERSION 3.10)

# # Global variables for project names
# set(PROJECT_NAME MyStackImp)
# set(LIB_NAME StackIMP)
# set(EXE_NAME MyStackImp)

# # Define the project
# project(${PROJECT_NAME} VERSION 1.0.0 LANGUAGES CXX)

# # Set the C++ standard
# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_EXTENSIONS OFF)

# # Create options to control build behavior
# option(BUILD_SHARED_LIBS "Build shared libraries instead of static" OFF)
# option(BUILD_TESTS "Build tests for the project" OFF)

# # Define the library target
# add_library(${LIB_NAME}
#     source/Stack.cpp
# )

# # Set the include directories
# target_include_directories(${LIB_NAME}
#     PUBLIC
#         $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#         $<INSTALL_INTERFACE:include>
# )

# # Export symbols for shared libraries on Windows
# if(WIN32 AND BUILD_SHARED_LIBS)
#     target_compile_definitions(${LIB_NAME} PRIVATE ${LIB_NAME}_EXPORTS)
# endif()

# # # Define the executable (for demo purposes)
# # add_executable(${EXE_NAME} main.cpp)
# # target_link_libraries(${EXE_NAME} PRIVATE ${LIB_NAME})

# # Install targets for vcpkg compatibility
# include(GNUInstallDirs)

# install(TARGETS ${LIB_NAME}
#     EXPORT ${LIB_NAME}Targets
#     LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#     ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
#     RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
# )

# install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

# # Export target information for downstream projects
# install(EXPORT ${LIB_NAME}Targets
#     FILE ${LIB_NAME}Config.cmake
#     NAMESPACE ${LIB_NAME}::
#     DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/${LIB_NAME}/cmake
# )

# # Package config file for find_package support
# include(CMakePackageConfigHelpers)
# write_basic_package_version_file(
#     "${CMAKE_CURRENT_BINARY_DIR}/${LIB_NAME}ConfigVersion.cmake"
#     VERSION ${PROJECT_VERSION}
#     COMPATIBILITY AnyNewerVersion
# )

# install(FILES
#     "${CMAKE_CURRENT_BINARY_DIR}/${LIB_NAME}ConfigVersion.cmake"
#     DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/${LIB_NAME}/cmake
# )


#############################################
# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Define global variables for the project and executable names
set(PROJECT_NAME Queue)
set(EXE_NAME Queue)

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


# find_package(fmt CONFIG REQUIRED)
# target_link_libraries(${EXE_NAME} PRIVATE fmt::fmt)

# Or use the header-only version
find_package(fmt CONFIG REQUIRED)
target_link_libraries(${EXE_NAME} PRIVATE fmt::fmt-header-only)
