#
# @file CMakeLists.txt
# @author Akagi201
# @date 2015/02/05
#

cmake_minimum_required(VERSION 2.8.4)

include_directories(${gtest_SOURCE_DIR}/include)

set(TEST_SOURCES valid_palindrome.cpp valid_palindrome_test.cpp)

add_executable(valid_palindrome_test ${TEST_SOURCES})

target_link_libraries(valid_palindrome_test gtest_main)
