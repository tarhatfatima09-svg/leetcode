## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

Use two pointers, left and right, to represent the current search range. Find the middle element and compare it with the target. If the target is smaller, search the left half; otherwise, search the right half.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search works efficiently because the search space is divided into half after each comparison.