# Panagram Checking

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string s, check if it is a "Panagram" or not.  A "Panagram" is a sentence containing every letter in the English Alphabet either in lowercase or Uppercase.

 **Examples:** 

```
Input: s = "Bawds jog, flick quartz, vex nymph"
Output: true
Explanation: In the given string, there are all the letters of the English alphabet. Hence, the output is true.

```

```
Input: s = "sdfs"
Output: false
Explanation: In the given string, there aren't all the letters present in the English alphabet. Hence, the output is false.
```

 **Constraints:** 
1 ≤ |s| ≤ 104
The string may contain any ASCII character.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T13:11:41.323Z  

```java
class Solution {
    public static boolean checkPangram(String s) {
        boolean[] mark = new boolean[26];
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c >= 'A' && c <= 'Z') {
                mark[c - 'A'] = true;
            } else if (c >= 'a' && c <= 'z') {
                mark[c - 'a'] = true;
            }
        }
        for (boolean b : mark) {
            if (!b) return false;
        }
        return true;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/pangram-checking-1587115620/1)