# Min and Max in Array

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an array **arr[]**. Your task is to find the  **minimum** and **maximum** elements in the array.

 **Examples:** 

```
Input: arr[] = [1, 4, 3, 5, 8, 6]
Output: [1, 8]
Explanation: minimum and maximum elements of array are 1 and 8.
```

```
Input: arr[] = [12, 3, 15, 7, 9]
Output: [3, 15]
Explanation: minimum and maximum element of array are 3 and 15.
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T09:50:00.446Z  

```java
import java.util.*;

class Solution {
    public ArrayList<Integer> getMinMax(int[] arr) {
        int min = arr[0];
        int max = arr[0];

        for (int x : arr) {
            if (x < min)
                min = x;

            if (x > max)
                max = x;
        }

        ArrayList<Integer> res = new ArrayList<>();
        res.add(min);
        res.add(max);

        return res;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1)