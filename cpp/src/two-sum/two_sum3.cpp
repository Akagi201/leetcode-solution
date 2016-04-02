/*
 * @file two_sum3.cpp
 * @author Akagi201
 * @date 2015/01/28
 *
 * https://oj.leetcode.com/problems/two-sum-iii-data-structure-design/
 */

#include <unordered_map>

#include "two_sum3.h"


//O(1) add
void TwoSum::add(int number) {
    nums[number]++;
}

//O(n) find
bool TwoSum::find(int value) {
    int one, two;
    for (auto it = nums.begin(); it != nums.end(); it++) {
        one = it->first;
        two = value - one;
        if ((one == two && it->second > 1) ||
                (one != two && nums.find(two) != nums.end())) {
            return true;
        }
    }
    return false;
}
