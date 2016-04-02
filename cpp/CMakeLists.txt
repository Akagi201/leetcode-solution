#
# @file CMakeLists.txt
# @author Akagi201
# @date 2015/01/27
#

cmake_minimum_required(VERSION 2.8.4)

project(leetcode)

enable_testing()

option(BUILD_GTEST "Builds the googletest subproject" OFF)

#Note that googlemock target already builds googletest
option(BUILD_GMOCK "Builds the googlemock subproject" ON)

if(BUILD_GMOCK)
  add_subdirectory( googlemock )
elseif(BUILD_GTEST)
  add_subdirectory( googletest )
endif()

add_subdirectory(src)
