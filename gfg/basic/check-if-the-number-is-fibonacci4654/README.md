# Check For Fibonacci

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an integer n, find if it is a Fibonacci Number. 

 **Examples :** 

```
Input: n = 34
Output: true
Explanation: 34 is one of the numbers of the Fibonacci series.
```

```
Input: n = 41
Output: false
Explanation: 41 is not in the numbers of the Fibonacci series.
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T11:35:28.066Z  

```java
class Solution {
    public boolean isFibonacci(int n) {
        if (n < 0) {
            return false;
        }
        long x1 = 5L * n * n + 4;
        long x2 = 5L * n * n - 4;

        return isPerfectSquare(x1) || isPerfectSquare(x2);
    }

    private boolean isPerfectSquare(long x) {
        if (x < 0) {
            return false;
        }
        long s = (long) Math.sqrt(x);
        return s * s == x;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/check-if-the-number-is-fibonacci4654/1)