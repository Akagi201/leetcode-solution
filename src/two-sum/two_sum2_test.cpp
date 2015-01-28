#include "gtest/gtest.h"

#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target);

TEST(TwoSumTestCase, Normal)
{

  int a[] = {2, 7, 11, 15};

  vector<int> numbers(a, a+4);
  vector<int> result = twoSum(numbers, 9);

  EXPECT_EQ(1, result[0]);
  EXPECT_EQ(2, result[1]);

#if 0
  //-------------------------
  int b[] = {1, 4, 2, 23, 11, 8, 62, 34, 23, 9, 10};

  vector<int> numbers_2(b, b+11);
  vector<int> result_2 = twoSum(numbers_2, 17);

  EXPECT_EQ(6, result_2[0]);
  EXPECT_EQ(10, result_2[1]);

  //-------------------------
  int c[] = {0, 4, 3, 0};
  vector<int> numbers_3(c, c+4);
  vector<int> result_3 = twoSum(numbers_3, 0);

  EXPECT_EQ(1, result_3[0]);
  EXPECT_EQ(4, result_3[1]);
#endif
}
