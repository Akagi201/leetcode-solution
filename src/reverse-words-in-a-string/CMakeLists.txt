#
# @file CMakeLists.txt
# @author Akagi201
# @date 2015/02/06
#

cmake_minimum_required(VERSION 2.8.4)

include_directories(${gtest_SOURCE_DIR}/include)

set(TEST_SOURCES reverse_words_in_a_string.cpp reverse_words_in_a_string_test.cpp)

add_executable(reverse_words_in_a_string_test ${TEST_SOURCES})

target_link_libraries(reverse_words_in_a_string_test gtest_main)
