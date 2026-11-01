# Combination Sum II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a collection of candidate numbers (`candidates`) and a target number (`target`), find all unique combinations in `candidates` where the candidate numbers sum to `target`.

Each number in `candidates` may only be used  **once**  in the combination.

 **Note:**  The solution set must not contain duplicate combinations.

 

 **Example 1:** 

```
Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]

```

 **Example 2:** 

```
Input: candidates = [2,5,2,1,2], target = 5
Output: 
[
[1,2,2],
[5]
]

```

 

 **Constraints:** 

- 1 <= candidates.length <= 100
- 1 <= candidates[i] <= 50
- 1 <= target <= 30

## Solution

**Language:** Java  
**Runtime:** 7 ms (beats 33.51%)  
**Memory:** 44.6 MB (beats 91.06%)  
**Submitted:** 2026-11-01T11:36:16.425Z  

```java
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(candidates); // Sort to handle duplicates and enable pruning
        backtrack(result, new ArrayList<>(), candidates, target, 0);
        return result;
    }
    
    private void backtrack(List<List<Integer>> result, List<Integer> tempList, int[] candidates, int remain, int start) {
        // Base cases
        if (remain < 0) {
            return;
        } else if (remain == 0) {
            result.add(new ArrayList<>(tempList));
            return;
        }
        
        for (int i = start; i < candidates.length; i++) {
            // Skip duplicates at the same level of the decision tree
            if (i > start && candidates[i] == candidates[i - 1]) {
                continue;
            }
            
            tempList.add(candidates[i]);
            // Pass i + 1 because each element can be used only once
            backtrack(result, tempList, candidates, remain - candidates[i], i + 1); 
            tempList.remove(tempList.size() - 1); // Backtrack
        }
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/combination-sum-ii/)