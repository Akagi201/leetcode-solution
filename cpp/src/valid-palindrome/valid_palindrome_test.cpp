
/*
 * @file valid-palindrome-test.cpp
 * @author Akagi201
 * @date 2015/02/05
 *
 * valid-palindrome unit test
 */

#include "gtest/gtest.h"
#include <string>

using namespace std;

bool isPalindrome(string s);

TEST(ValidPalindromeTestCase, Normal)
{
    EXPECT_TRUE( isPalindrome("A man, a plan, a canal: Panama") );
    EXPECT_FALSE( isPalindrome("race a car") );
}
