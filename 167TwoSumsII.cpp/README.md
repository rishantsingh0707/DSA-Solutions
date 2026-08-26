# [167. Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)

**Difficulty:** Medium

**Topics:** Array, Two Pointers

## Problem

Given a **1-indexed** array of integers `numbers` that is already sorted in **non-decreasing order**, find two numbers that add up to the `target`.

Return the **1-based indices** of the two numbers as `[index1, index2]`.

You may not use the same element twice.

Your solution must use **only constant extra space**.

## Examples

### Example 1

```text
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]

Explanation:
2 + 7 = 9
Therefore, index1 = 1 and index2 = 2.
```

### Example 2

```text
Input: numbers = [2,3,4], target = 6
Output: [1,3]

Explanation:
2 + 4 = 6
Therefore, index1 = 1 and index2 = 3.
```

### Example 3

```text
Input: numbers = [-1,0], target = -1
Output: [1,2]

Explanation:
-1 + 0 = -1
Therefore, index1 = 1 and index2 = 2.
```

## Constraints

* `2 <= numbers.length <= 3 * 10^4`
* `-1000 <= numbers[i] <= 1000`
* `numbers` is sorted in **non-decreasing order**.
* `-1000 <= target <= 1000`
* There is **exactly one solution**.
* You may not use the same element twice.

## Approach

Use the **Two Pointer** technique.

Set:

```text
left = 0
right = numbers.length - 1
```

Then calculate:

```text
sum = numbers[left] + numbers[right]
```

* If `sum == target`, return the two indices.
* If `sum < target`, move `left` forward because we need a larger value.
* If `sum > target`, move `right` backward because we need a smaller value.

Since the array is sorted, this allows us to find the answer in one pass.
