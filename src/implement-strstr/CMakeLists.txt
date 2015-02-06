#
# @file CMakeLists.txt
# @author Akagi201
# @date 2015/02/06
#

cmake_minimum_required(VERSION 2.8.4)

include_directories(${gtest_SOURCE_DIR}/include)

set(TEST_SOURCES implement_strstr.cpp implement_strstr_test.cpp)

add_executable(implement_strstr_test ${TEST_SOURCES})

target_link_libraries(implement_strstr_test gtest_main)
