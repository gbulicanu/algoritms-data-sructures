cmake_minimum_required(VERSION 2.6)
project(basic_test)

if(CMAKE_BUILD_TOOL MATCHES "(msdev|devenv|nmake)")
    add_definitions(/W2)
endif()

include_directories(src)

################################
# GTest
################################
ADD_SUBDIRECTORY (
    c:/d/personal/algoritms-data-sructures/libs/googletest-release-1.8.0
    c:/d/personal/algoritms-data-sructures/libs/googletest-release-1.8.0/build
)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

################################
# Unit Tests
################################
# Add test cpp file
add_executable( runUnitTests test/reverse.cpp )
# Link test executable against gtest & gtest_main
target_link_libraries(runUnitTests gtest gtest_main)
add_test( runUnitTests runUnitTests )