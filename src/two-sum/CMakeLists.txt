#
# @file CMakeLists.txt
# @author Akagi201
# @date 2015/01/27
#

cmake_minimum_required(VERSION 2.8.4)

include_directories(${gtest_SOURCE_DIR}/include)

set(TEST_SOURCES two_sum.cpp two_sum_test.cpp)

add_executable(two_sum_test ${TEST_SOURCES})

target_link_libraries(two_sum_test gtest_main)
