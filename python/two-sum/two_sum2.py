# @file two_sum2.py
# @author Akagi201
# @date 2015/07/28
# https://oj.leetcode.com/problems/two-sum-ii-input-array-is-sorted/

# Time: O(n)
# Space: O(1)


class Solution:
    # @param {integer[]} numbers
    # @param {integer} target
    # @return {integer[]}

    def twoSum(self, numbers, target):
        start, end = 0, len(numbers) - 1

        while start != end:
            sum = numbers[start] + numbers[end]
            if sum > target:
                end -= 1
            elif sum < target:
                start += 1
            else:
                return [start + 1, end + 1]
    tests = [
        ([2, 7, 11, 15], 9, [1, 2])
    ]
