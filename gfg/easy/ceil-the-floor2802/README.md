# Floor and Ceil in Unsorted

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an unsorted array  **arr[]**  of integers and an integer  **x**, find the floor and ceiling of  **x**  in  **arr[]**.

- Floor of x is the largest element which is smaller than or equal to x. Floor of x doesn’t exist if x is smaller than smallest element of arr[].
- Ceil of x is the smallest element which is greater than or equal to x. Ceil of x doesn’t exist if x is greater than greatest element of arr[].

Return an array of integers denoting the `[floor, ceil]`. Return `-1` for floor or ceiling if the floor or ceiling is not present.

 **Examples:** 

```
Input: x = 7, arr[] = [5, 6, 8, 9, 6, 5, 5, 6]
Output: 6, 8
Explanation: Floor of 7 is 6 and ceil of 7 is 8.

```

```
Input: x = 10, arr[] = [5, 6, 8, 8, 6, 5, 5, 6]
Output: 8, -1
Explanation: Floor of 10 is 8 but ceil of 10 is not possible.

```

 **Constraints :** 
1 ≤ arr.size ≤ 105
1 ≤ arr[i], x ≤ 106

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-19T10:32:44.371Z  

```java
class Solution {
    public int[] getFloorAndCeil(int x, int[] arr) {
        int floor = -1;
        int ceil = -1;
        for (int num : arr) {
        if (num <= x) {
        floor = Math.max(floor, num);
            }
        if (num >= x) {
        if (ceil == -1 || num < ceil) {
        ceil = num;
                }
      }
}
       return new int[]{floor, ceil};
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/ceil-the-floor2802/1)