# Square Root

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a positive integer  **n,**  find the square root of n. If n is not a perfect square, then return the floor value.

Floor value of any number is the greatest Integer which is less than or equal to that number.

 **Examples:** 

```
Input: n = 4
Output: 2
Explanation: Since, 4 is a perfect square, so its square root is 2.

```

```
Input: n = 11
Output: 3
Explanation: Since, 11 is not a perfect square, floor of square root of 11 is 3.
```

```
Input: n = 1
Output: 1
Explanation: 1 is a perfect square, so its square root is 1.
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T10:34:05.036Z  

```java
class Solution {
    int floorSqrt(int n) {
        if (n == 0 || n == 1) {
            return n;
        }

        long low = 1, high = n, ans = 1;

        while (low <= high) {
            long mid = low + (high - low) / 2;

            if (mid * mid == n) {
                return (int) mid;
            } else if (mid * mid < n) {
                ans = mid; // Store the current valid floor value
                low = mid + 1; // Try to find a larger integer whose square is <= n
            } else {
                high = mid - 1; // Look in the lower half
            }
        }

        return (int) ans;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/square-root/1)