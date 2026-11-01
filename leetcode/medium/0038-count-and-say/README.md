# Count and Say

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

The  **count-and-say**  sequence is a sequence of digit strings defined by the recursive formula:

- countAndSay(1) = "1"
- countAndSay(n) is the run-length encoding of countAndSay(n - 1).

Run-length encoding (RLE) is a string compression method that works by replacing each maximal group of consecutive identical characters with the concatenation of the length of the group followed by the character itself. For example, to compress the string `"3322251"` we replace `"33"` with `"23"`, replace `"222"` with `"32"`, replace `"5"` with `"15"`, and replace `"1"` with `"11"`. Thus the compressed string becomes `"23321511"`.

Given a positive integer `n`, return  *the* `nth` *element of the  **count-and-say**  sequence*.

 

 **Example 1:** 

 **Input:**  n = 4

 **Output:**  "1211"

 **Explanation:** 

```
countAndSay(1) = "1"
countAndSay(2) = RLE of "1" = "11"
countAndSay(3) = RLE of "11" = "21"
countAndSay(4) = RLE of "21" = "1211"

```

 **Example 2:** 

 **Input:**  n = 1

 **Output:**  "1"

 **Explanation:** 

This is the base case.

 

 **Constraints:** 

- 1 <= n <= 30

 

 **Follow up:**  Could you solve it iteratively?

## Solution

**Language:** Java  
**Runtime:** 7 ms (beats 70.64%)  
**Memory:** 42.8 MB (beats 71.12%)  
**Submitted:** 2026-11-01T11:34:27.176Z  

```java
class Solution {
    public String countAndSay(int n) {
        if (n <= 0) {
            return "";
        }
        
        String result = "1";
        
        // Build the sequence up to n iteratively
        for (int i = 2; i <= n; i++) {
            StringBuilder sb = new StringBuilder();
            int len = result.length();
            int count = 1;
            
            for (int j = 1; j < len; j++) {
                if (result.charAt(j) == result.charAt(j - 1)) {
                    count++;
                } else {
                    sb.append(count).append(result.charAt(j - 1));
                    count = 1; // Reset count for the new character group
                }
            }
            
            // Append the last group of characters
            sb.append(count).append(result.charAt(len - 1));
            result = sb.toString();
        }
        
        return result;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/count-and-say/)