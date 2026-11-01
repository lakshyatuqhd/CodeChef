# Jump Game II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a  **0-indexed**  array of integers `nums` of length `n`. You are initially positioned at index 0.

Each element `nums[i]` represents the maximum length of a forward jump from index `i`. In other words, if you are at index `i`, you can jump to any index `(i + j)` where:

- 0 <= j <= nums[i] and
- i + j < n

Return  *the minimum number of jumps to reach index* `n - 1`. The test cases are generated such that you can reach index `n - 1`.

 

 **Example 1:** 

```
Input: nums = [2,3,1,1,4]
Output: 2
Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.

```

 **Example 2:** 

```
Input: nums = [2,3,0,1,4]
Output: 2

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- 0 <= nums[i] <= 1000
- It's guaranteed that you can reach nums[n - 1].

## Solution

**Language:** Java  
**Runtime:** 2 ms (beats 39.10%)  
**Memory:** 47 MB (beats 77.49%)  
**Submitted:** 2026-11-01T11:40:31.985Z  

```java
class Solution {
    public int jump(int[] nums) {
        if (nums == null || nums.length <= 1) {
            return 0;
        }
        
        int jumps = 0;
        int currentEnd = 0;
        int farthest = 0;
        
        // Traverse up to n - 2 because we don't need to jump from the last index
        for (int i = 0; i < nums.length - 1; i++) {
            farthest = Math.max(farthest, i + nums[i]);
            
            // If we have reached the end of the current jump range, take another jump
            if (i == currentEnd) {
                jumps++;
                currentEnd = farthest;
                
                // Early exit if currentEnd already reaches or surpasses the last index
                if (currentEnd >= nums.length - 1) {
                    break;
                }
            }
        }
        
        return jumps;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/jump-game-ii/)