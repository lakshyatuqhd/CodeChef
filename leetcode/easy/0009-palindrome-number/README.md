# Palindrome Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `x`, return `true` if `x` is a  **palindrome**, and `false` otherwise.

 

 **Example 1:** 

```
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

```

 **Example 2:** 

```
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

```

 **Example 3:** 

```
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

 

 **Follow up:**  Could you solve it without converting the integer to a string?

## Solution

**Language:** Java  
**Runtime:** 14 ms (beats 21.72%)  
**Memory:** 45.5 MB (beats 88.07%)  
**Submitted:** 2026-11-01T11:02:25.460Z  

```java
class Solution {
    public boolean isPalindrome(int x) {
        // Negative numbers are not palindromes (e.g., -121 -> 121-)
        // Numbers ending in 0 (except 0 itself) are not palindromes (e.g., 10 -> 01)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        
        // Revert only the second half of the number to avoid integer overflow
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + (x % 10);
            x /= 10;
        }

        // For even-length numbers: x == reversedHalf (e.g., 1221 -> x = 12, reversedHalf = 12)
        // For odd-length numbers: x == reversedHalf / 10 (e.g., 121 -> x = 1, reversedHalf = 12)
        return x == reversedHalf || x == reversedHalf / 10;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/palindrome-number/)