## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

Use an unordered map to store each number and its index while traversing the array. For every number, check whether its complement (target - current number) is already present in the map. If found, return the two indices.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The solution finds the required pair in a single pass through the array.