# [26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

**Difficulty:** Easy

**Topics:** Array, Two Pointers

## Problem

Given an integer array `nums` sorted in **non-decreasing order**, remove the duplicates **in-place** such that each unique element appears only once.

Return the number of unique elements in `nums`.

Let the number of unique elements be `k`.

To be accepted:

* The first `k` elements of `nums` must contain the unique elements in sorted order.
* The elements beyond the first `k` positions are not important.
* Return `k`.

## Examples

### Example 1

```text
Input: nums = [1,1,2]
Output: 2
nums = [1,2,_]
```

### Example 2

```text
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5
nums = [0,1,2,3,4,_,_,_,_,_]
```

## Constraints

* `1 <= nums.length <= 3 * 10^4`
* `-100 <= nums[i] <= 100`
* `nums` is sorted in **non-decreasing order**.
