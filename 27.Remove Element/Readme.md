# [27. Remove Element](https://leetcode.com/problems/remove-element/)

**Difficulty:** Easy

**Topics:** Array, Two Pointers

## Problem

Given an integer array `nums` and an integer `val`, remove all occurrences of `val` from `nums` **in-place**.

Return the number of elements in `nums` that are **not equal to `val`**.

Let the number of elements not equal to `val` be `k`.

To be accepted:

* The first `k` elements of `nums` must contain the elements that are not equal to `val`.
* The elements after the first `k` positions are not important.
* Return `k`.

## Examples

### Example 1

```text
Input: nums = [3,2,2,3], val = 3
Output: 2
nums = [2,2,_,_]
```

### Example 2

```text
Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5
nums = [0,1,4,0,3,_,_,_]
```

## Constraints

* `0 <= nums.length <= 100`
* `0 <= nums[i] <= 50`
* `0 <= val <= 100`
