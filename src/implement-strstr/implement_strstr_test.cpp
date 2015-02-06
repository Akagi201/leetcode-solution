/*
 * @file implement_strstr.cpp
 * @author Akagi201
 * @date 2015/02/06
 *
 * implement_strstr unit test
 */

#include "gtest/gtest.h"
#include <stddef.h>

int strStr(char *haystack, char *needle);

TEST(StrstrTestCase, InvalidInput)
{
    char haystack[] = "hello world";
    char needle[] = "world";

    EXPECT_EQ(-1, strStr(NULL, NULL));
    EXPECT_EQ(-1, strStr(NULL, needle));
    EXPECT_EQ(-1, strStr(haystack, NULL));
    EXPECT_EQ(-1, strStr("haha", "hahaha"));
    EXPECT_EQ(-1, strStr("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"));
}

TEST(StrstrTestCase, Normal)
{
    char haystack[] = "hello world";
    char haystack2[] = "hello world !";
    char needle[] = "world";

    EXPECT_EQ(6, strStr(haystack, needle));
    EXPECT_EQ(6, strStr(haystack2, needle));
    EXPECT_EQ(1, strStr("mississippi", "issi"));
    EXPECT_EQ(3, strStr("aaaba", "ba")); // off-by-one error
}
