# Left Smaller Right Greater

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an unsorted array `arr[]`, find the first element such that every element to its left is less than or equal to it, and every element to its right is greater than or equal to it.

 **Note:**  If no such element exists, return `-1`.

 **Examples :** 

```
Input: arr = [4, 2, 5, 7]
Output: 5
Explanation: All elements to the left of 5 are less than or equal to 5, and all elements to the right are greater than or equal to 5.
```

```
Input: arr = [11, 9, 12]
Output: -1
Explanation: No element in the array satisfies the required condition.
```

 **Constraints:** 
3 ≤ arr.size() ≤ 106
1 ≤ arr[i] ≤ 106

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-19T10:18:00.157Z  

```java
class Solution{
    public int findElement(int[] a){
        int n=a.length;
        int[] r=new int[n];
        r[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--){
            r[i]=Math.min(a[i],r[i+1]);
        }
        int l=a[0];
        for(int i=1;i<n-1;i++){
            if(l<=a[i]&&a[i]<=r[i+1]){
                return a[i];
            }
            l=Math.max(l,a[i]);
        }
        return -1;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/unsorted-array4925/1)