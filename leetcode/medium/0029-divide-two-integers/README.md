# Divide Two Integers

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two integers `dividend` and `divisor`, divide two integers  **without**  using multiplication, division, and mod operator.

The integer division should truncate toward zero, which means losing its fractional part. For example, `8.345` would be truncated to `8`, and `-2.7335` would be truncated to `-2`.

Return  *the  **quotient**  after dividing* `dividend` *by* `divisor`.

 **Note:** Assume we are dealing with an environment that could only store integers within the  **32-bit**  signed integer range: `[−231, 231 − 1]`. For this problem, if the quotient is  **strictly greater than**  `231 - 1`, then return `231 - 1`, and if the quotient is  **strictly less than**  `-231`, then return `-231`.

 

 **Example 1:** 

```
Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = 3.33333.. which is truncated to 3.

```

 **Example 2:** 

```
Input: dividend = 7, divisor = -3
Output: -2
Explanation: 7/-3 = -2.33333.. which is truncated to -2.

```

 

 **Constraints:** 

- -231 <= dividend, divisor <= 231 - 1
- divisor != 0

## Solution

**Language:** Java  
**Runtime:** 2 ms (beats 18.38%)  
**Memory:** 41.9 MB (beats 98.34%)  
**Submitted:** 2026-11-01T11:27:06.177Z  

```java
class Solution {
    public int divide(int dividend, int divisor) {
        // Handle special overflow case
        if (dividend == Integer.MIN_VALUE && divisor == -1) {
            return Integer.MAX_VALUE;
        }
        
        // Determine the sign of the result
        boolean negative = (dividend < 0) ^ (divisor < 0);
        
        // Use long to avoid overflow when converting to absolute values
        long dvd = Math.abs((long) dividend);
        long dvs = Math.abs((long) divisor);
        
        long result = 0;
        
        while (dvd >= dvs) {
            long temp = dvs, multiple = 1;
            
            // Double the divisor and multiplier while possible
            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            
            dvd -= temp;
            result += multiple;
        }
        
        // Apply the sign
        result = negative ? -result : result;
        
        // Clamp the result to 32-bit signed integer range
        if (result > Integer.MAX_VALUE) {
            return Integer.MAX_VALUE;
        }
        if (result < Integer.MIN_VALUE) {
            return Integer.MIN_VALUE;
        }
        
        return (int) result;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/divide-two-integers/)