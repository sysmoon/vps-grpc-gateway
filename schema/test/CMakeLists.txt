cmake_minimum_required(VERSION 3.0.0)

#include(CTest)
#enable_testing()

if(POLICY CMP0076)
    cmake_policy(SET CMP0076 NEW)
endif()

#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)

set( CMAKE_VERBOSE_MAKEFILE true )
set( CMAKE_CXX_STANDARD 17 CACHE STRING "C++ ISO Standard" )
set( CMAKE_CXX_STANDARD_REQUIRED ON )
set( CMAKE_CXX_EXTENSIONS OFF ) # OFF: std c++ , ON: gnu c++

set( CMAKE_C_FLAGS "-march=core-avx2 -mtune=core-avx2" )
set( CMAKE_C_FLAGS_DEBUG "-g" )
set( CMAKE_C_FLAGS_RELEASE "-Ofast" )


#set( CMAKE_CXX_FLAGS "-Werror -Wall -Wfatal-errors -march=core-avx2 -mtune=core-avx2" )
set( CMAKE_CXX_FLAGS "-Wall -Wfatal-errors -Wextra -Wno-ignored-qualifiers -Wno-deprecated-copy -Wno-unused-function -march=core-avx2 -mtune=core-avx2" )
set( CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG" )
set( CMAKE_CXX_FLAGS_RELEASE "-Ofast -g -DNDEBUG" )

ADD_DEFINITIONS ( -D__linux__ )


##################################################
project(prototest VERSION 0.1.0)

string( TOLOWER ${PROJECT_NAME} PROJECT_NAME_LOWER )

set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} )


add_executable(prototest prototest.cpp)

add_subdirectory( ${CMAKE_CURRENT_SOURCE_DIR}/../prototopic/cpp ${CMAKE_CURRENT_SOURCE_DIR}/build/linux-x64/prototopic )

target_include_directories( ${PROJECT_NAME} PRIVATE
                            ${CMAKE_CURRENT_SOURCE_DIR}/../prototopic/cpp/

                            ${CMAKE_CURRENT_SOURCE_DIR}/../../protobuf3_17_1/include/
                            )

target_link_directories( ${PROJECT_NAME} PRIVATE
                            ${CMAKE_CURRENT_SOURCE_DIR}/../../protobuf3_17_1/lib/linux-x64/
                            )

target_link_libraries( ${PROJECT_NAME} LINK_PUBLIC
                            protobuf
                            )