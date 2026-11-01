# Longest Common Prefix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

 

 **Example 1:** 

```
Input: strs = ["flower","flow","flight"]
Output: "fl"

```

 **Example 2:** 

```
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

```

 

 **Constraints:** 

- 1 <= strs.length <= 200
- 0 <= strs[i].length <= 200
- strs[i] consists of only lowercase English letters if it is non-empty.

## Solution

**Language:** Java  
**Runtime:** 1 ms (beats 58.59%)  
**Memory:** 42.5 MB (beats 95.31%)  
**Submitted:** 2026-11-01T11:06:32.956Z  

```java
class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) {
            return "";
        }
        
        // Loop through the characters of the first string
        for (int i = 0; i < strs[0].length(); i++) {
            char c = strs[0].charAt(i);
            
            // Check this character against all other strings
            for (int j = 1; j < strs.length; j++) {
                // If we reach the end of another string or find a mismatch,
                // return the prefix found so far
                if (i == strs[j].length() || strs[j].charAt(i) != c) {
                    return strs[0].substring(0, i);
                }
            }
        }
        
        // If we finish checking the first string, it is the common prefix itself
        return strs[0];
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/longest-common-prefix/)