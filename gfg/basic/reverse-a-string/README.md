# Reverse a String

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a string  **s**, reverse the string.

 **Examples:** 

```
Input: s = "Geeks"
Output: "skeeG"

```

```
Input: s = "for"
Output: "rof"
```

```
Input: s = "a"
Output: "a"
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T13:03:43.290Z  

```java
class Solution {
    public static String reverseString(String s) {
        return new StringBuilder(s).reverse().toString();
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/reverse-a-string/1)