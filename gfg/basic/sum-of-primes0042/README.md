# Sum of Prime Digits

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

You are given an integer  **n**. Your task is to calculate the sum of primes present as digits of a given number n.

 **Examples:** 

```
Input: n = 333
Output: 9
Explanation: 3 is a prime number. It is present 3 times. So 3+3+3 = 9.
```

```
Input: n = 686
Output: 0
Explanation: Neither 6 nor 8 is a prime number.
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T11:01:50.780Z  

```java
class Solution {
    public int primeSum(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            if (digit == 2 || digit == 3 || digit == 5 || digit == 7) {
                sum += digit;
            }
            n /= 10;
        }
        return sum;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/sum-of-primes0042/1)