/*
 * @file reverse_words_in_a_string_test.cpp
 * @author Akagi201
 * @date 2015/02/06
 *
 * reverse_words_in_a_string unit test
 */

#include "gtest/gtest.h"
#include <stddef.h>
#include <string>

using namespace std;

extern void reverseWords(string &s);

TEST(ReverseWordsTestCase, InvalidInput)
{
    string s;
    reverseWords(s);
    EXPECT_EQ("", s);
    s = " ";
    reverseWords(s);
    EXPECT_EQ("", s);
    s = "1 ";
    reverseWords(s);
    EXPECT_EQ("1", s);
    s = "love";
    reverseWords(s);
    EXPECT_EQ("love", s);
}

TEST(ReverseWordsTestCase, Normal)
{
    string s;
    s = "i love cpp";
    reverseWords(s);
    EXPECT_EQ("cpp love i", s);
}