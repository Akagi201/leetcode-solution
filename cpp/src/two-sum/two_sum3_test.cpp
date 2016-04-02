/*
 * @file two_sum3_test.cpp
 * @author Akagi201
 * @date 2015/01/28
 *
 * two_sum3 unit test
 */

#include "gtest/gtest.h"
#include "two_sum3.h"
#include <vector>

using namespace std;

TEST(TwoSum3TestCase, Normal)
{
  TwoSum *ts = new TwoSum();

  ASSERT_TRUE(ts != NULL);

  ts->add(1);

  ts->add(3);

  ts->add(5);

  EXPECT_EQ(true, ts->find(4));
  EXPECT_EQ(false, ts->find(7));

  delete ts;
}
