cmake_minimum_required(VERSION 2.6)
project(basic_test)
include(gtest.cmake)

# GTest needs threading support
find_package (Threads)

include_directories(src)

SET(COVERAGE OFF CACHE BOOL "Coverage")

################################
# GTest
################################
#ADD_SUBDIRECTORY (
#    /home/gbulicanu/code/per/algoritms-data-sructures/libs/googletest-release-1.8.0
#    /home/gbulicanu/code/per/algoritms-data-sructures/libs/googletest-release-1.8.0/build
#)
enable_testing()
#include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR} src)

################################
# Unit Tests
################################
# Add test cpp file
add_executable( runUnitTests src/reverse.cpp test/reverse.cpp )
# Link test executable against gtest & gtest_main
target_link_libraries(runUnitTests gtest gtest_main ${CMAKE_THREAD_LIBS_INIT})
add_test( runUnitTests runUnitTests )

if (COVERAGE)
    target_compile_options(runUnitTests PRIVATE --coverage)
    target_link_libraries(runUnitTests PRIVATE --coverage)
endif()
