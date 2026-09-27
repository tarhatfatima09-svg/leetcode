## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

Track the minimum stock price seen so far while traversing the array. For each price, calculate the profit that could be made by selling at that price and keep track of the maximum profit.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution makes one pass through the prices and keeps only the minimum price and maximum profit.