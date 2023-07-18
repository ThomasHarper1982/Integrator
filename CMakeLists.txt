cmake_minimum_required(VERSION 3.0.0)


#set(CMAKE_C_COMPILER "/usr/bin/gcc-11")
#set(CMAKE_CXX_COMPILER "/usr/bin/g++-11")

project(integrator VERSION 0.1.0 LANGUAGES C CXX)
#project(integrator)
include(CTest)
enable_testing()
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")
include(cmake/CPM.cmake)

CPMAddPackage("gh:CodeFinder2/rapidxml@1.13")

add_executable(integrator src/main.cpp src/equation_node.cpp src/equation.cpp src/workspace.cpp src/xmlparser.cpp)
##add_executable(integrator src/main2.cpp src/equation_node.cpp)

target_link_libraries(integrator rapidxml)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)


