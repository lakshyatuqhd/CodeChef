# Permutations

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array `nums` of distinct integers, return all the possible permutations. You can return the answer in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

```

 **Example 2:** 

```
Input: nums = [0,1]
Output: [[0,1],[1,0]]

```

 **Example 3:** 

```
Input: nums = [1]
Output: [[1]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 6
- -10 <= nums[i] <= 10
- All the integers of nums are unique.

## Solution

**Language:** Java  
**Runtime:** 2 ms (beats 41.31%)  
**Memory:** 45.1 MB (beats 84.39%)  
**Submitted:** 2026-11-01T11:41:13.366Z  

```java
import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(result, new ArrayList<>(), nums);
        return result;
    }
    
    private void backtrack(List<List<Integer>> result, List<Integer> tempList, int[] nums) {
        // Base case: if the temporary list matches the size of nums, we found a permutation
        if (tempList.size() == nums.length) {
            result.add(new ArrayList<>(tempList));
            return;
        }
        
        for (int i = 0; i < nums.length; i++) {
            // If the element is already in the permutation, skip it
            if (tempList.contains(nums[i])) {
                continue;
            }
            
            tempList.add(nums[i]);              // Choose
            backtrack(result, tempList, nums);  // Explore
            tempList.remove(tempList.size() - 1); // Unchoose (Backtrack)
        }
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/permutations/)