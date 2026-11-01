# Subsets

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` of  **unique**  elements, return  *all possible*   *subsets*   *(the power set)*.

The solution set  **must not**  contain duplicate subsets. Return the solution in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [[],[0]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 10
- -10 <= nums[i] <= 10
- All the numbers of nums are unique.

## Solution

**Language:** Java  
**Runtime:** 1 ms (beats 90.31%)  
**Memory:** 44 MB (beats 69.80%)  
**Submitted:** 2026-11-01T11:48:30.891Z  

```java
import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(result, new ArrayList<>(), nums, 0);
        return result;
    }
    
    private void backtrack(List<List<Integer>> result, List<Integer> tempList, int[] nums, int start) {
        // Every state represents a valid subset, so add a copy to the result
        result.add(new ArrayList<>(tempList));
        
        for (int i = start; i < nums.length; i++) {
            tempList.add(nums[i]);              // Choose
            backtrack(result, tempList, nums, i + 1); // Explore
            tempList.remove(tempList.size() - 1); // Unchoose (Backtrack)
        }
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/subsets/)