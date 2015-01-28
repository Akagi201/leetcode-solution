/*
 * @file two_sum3.h
 * @author Akagi201
 * @date 2015/01/28
 *
 * https://oj.leetcode.com/problems/two-sum-iii-data-structure-design/
 */

#include <unordered_map>

using namespace std;

class TwoSum {
private:
  unordered_map<int, int> nums;
public:

  //O(1) add
  void add(int number);

  //O(n) find
  bool find(int value);
};
