# Union of 2 Sorted Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two sorted arrays  **a[]**  and  **b[]**, where each array may contain duplicate elements, the task is to return the elements in the union of the two arrays in sorted order. Union of two arrays can be defined as the set containing distinct elements that are present in either of the arrays.

 **Examples:** 

```
Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
Output: [1, 2, 3, 4, 5, 6, 7]
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.
```

```
Input: a[] = [2, 2, 3, 4, 5], b[] = [1, 1, 2, 3, 4]
Output: [1, 2, 3, 4, 5]
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5.
```

```
Input: a[] = [1, 1, 1, 1, 1], b[] = [2, 2, 2, 2, 2]
Output: [1, 2]
Explanation: Distinct elements including both the arrays are: 1 2.
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T09:52:26.079Z  

```java
import java.util.*;

class Solution {
    public static ArrayList<Integer> findUnion(int a[], int b[]) {
        ArrayList<Integer> res = new ArrayList<>();
        int i = 0, j = 0;

        while (i < a.length && j < b.length) {
            int x;

            if (a[i] < b[j])
                x = a[i++];
            else if (a[i] > b[j])
                x = b[j++];
            else {
                x = a[i];
                i++;
                j++;
            }

            if (res.isEmpty() || res.get(res.size() - 1) != x)
                res.add(x);
        }

        while (i < a.length) {
            if (res.isEmpty() || res.get(res.size() - 1) != a[i])
                res.add(a[i]);
            i++;
        }

        while (j < b.length) {
            if (res.isEmpty() || res.get(res.size() - 1) != b[j])
                res.add(b[j]);
            j++;
        }

        return res;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1)