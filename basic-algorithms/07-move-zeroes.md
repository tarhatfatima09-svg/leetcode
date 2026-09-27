## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

Traverse the array and maintain a position for the next non-zero element. Move all non-zero elements toward the beginning of the array and fill the remaining positions with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution modifies the array in-place while maintaining the relative order of non-zero elements.