# Wildcard Matching

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given an input string (`s`) and a pattern (`p`), implement wildcard pattern matching with support for `'?'` and `'*'` where:

- '?' Matches any single character.
- '*' Matches any sequence of characters (including the empty sequence).

The matching should cover the  **entire**  input string (not partial).

 

 **Example 1:** 

```
Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".

```

 **Example 2:** 

```
Input: s = "aa", p = "*"
Output: true
Explanation: '*' matches any sequence.

```

 **Example 3:** 

```
Input: s = "cb", p = "?a"
Output: false
Explanation: '?' matches 'c', but the second letter is 'a', which does not match 'b'.

```

 

 **Constraints:** 

- 0 <= s.length, p.length <= 2000
- s contains only lowercase English letters.
- p contains only lowercase English letters, '?' or '*'.

## Solution

**Language:** Java  
**Runtime:** 3 ms (beats 77.05%)  
**Memory:** 44.7 MB (beats 96.17%)  
**Submitted:** 2026-11-01T11:39:33.832Z  

```java
class Solution {
    public boolean isMatch(String s, String p) {
        int sLen = s.length();
        int pLen = p.length();
        int sIdx = 0, pIdx = 0;
        int starIdx = -1, match = 0;
        
        while (sIdx < sLen) {
            // Case 1: Direct match or '?'
            if (pIdx < pLen && (p.charAt(pIdx) == '?' || p.charAt(pIdx) == s.charAt(sIdx))) {
                sIdx++;
                pIdx++;
            } 
            // Case 2: Encountered '*'
            else if (pIdx < pLen && p.charAt(pIdx) == '*') {
                starIdx = pIdx;
                match = sIdx;
                pIdx++;
            } 
            // Case 3: Mismatch, but we can fallback to the previous '*'
            else if (starIdx != -1) {
                pIdx = starIdx + 1;
                match++;
                sIdx = match;
            } 
            // Case 4: Mismatch and no '*' to fallback on
            else {
                return false;
            }
        }
        
        // Check for remaining characters in pattern (must be all '*')
        while (pIdx < pLen && p.charAt(pIdx) == '*') {
            pIdx++;
        }
        
        return pIdx == pLen;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/wildcard-matching/)