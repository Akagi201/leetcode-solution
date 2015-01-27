#
# @file CMakeLists.txt
# @author Akagi201
# @date 2015/01/27
#

cmake_minimum_required(VERSION 2.8.4)

project(leetcode)

set(GTEST_DIR "gtest")

#set(GMOCK_DIR "gmock")

add_subdirectory(${GTEST_DIR})

#add_subdirectory(${GMOCK_DIR})

add_subdirectory(src)
