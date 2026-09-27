## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

Start with the first string as the initial prefix. Compare it with each following string and shorten the prefix until it matches the beginning of the current string.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

The prefix is reduced whenever the current string does not start with it.