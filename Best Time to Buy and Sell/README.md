# [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

**Difficulty:** Easy

**Topics:** Array, Dynamic Programming

## Problem

You are given an array `prices` where `prices[i]` is the price of a stock on the `i`th day.

You want to maximize your profit by:

* Choosing **one day to buy** the stock.
* Choosing a **different day in the future to sell** the stock.

Return the **maximum profit** you can achieve.

If no profit can be made, return `0`.

## Examples

### Example 1

```text
Input: prices = [7,1,5,3,6,4]
Output: 5

Explanation:
Buy on day 2 at price 1.
Sell on day 5 at price 6.

Profit = 6 - 1 = 5
```

### Example 2

```text
Input: prices = [7,6,4,3,1]
Output: 0

Explanation:
There is no profitable transaction, so the maximum profit is 0.
```

## Constraints

* `1 <= prices.length <= 10^5`
* `0 <= prices[i] <= 10^4`

## Approach

Keep track of:

* The **minimum price** seen so far.
* The **maximum profit** possible at each day.

For every price:

```text
minimum price = min(minimum price, current price)

profit = current price - minimum price

maximum profit = max(maximum profit, profit)
```

## Complexity

* **Time:** `O(n)`
* **Space:** `O(1)`
