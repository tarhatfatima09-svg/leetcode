## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

Use a stack to keep track of opening brackets. When a closing bracket is encountered, check whether it matches the most recent opening bracket on the stack. The string is valid only if all brackets are correctly matched and the stack is empty at the end.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

A stack is used because brackets must be matched in last-in-first-out order.