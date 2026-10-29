# Count Inversions

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers  **arr[]**. You have to find the Inversion Count of the array. Inversion count is the number of pairs of elements (i, j) such that i < j and arr[i] > arr[j].

 **Examples:** 

```
Input: arr[] = [2, 4, 1, 3, 5]
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).
```

```
Input: arr[] = [2, 3, 4, 5, 6]
Output: 0
Explanation: As the sequence is already sorted so there is no inversion count.
```

```
Input: arr[] = [10, 10, 10]
Output: 0
Explanation: As all the elements of array are same, so there is no inversion count.
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T09:58:30.348Z  

```java
class Solution {
    int inversionCount(int arr[]) {
        return mergeSort(arr, 0, arr.length - 1);
    }

    int mergeSort(int arr[], int l, int r) {
        int count = 0;

        if (l < r) {
            int mid = (l + r) / 2;

            count += mergeSort(arr, l, mid);
            count += mergeSort(arr, mid + 1, r);
            count += merge(arr, l, mid, r);
        }

        return count;
    }

    int merge(int arr[], int l, int mid, int r) {
        int[] temp = new int[r - l + 1];
        int i = l, j = mid + 1, k = 0;
        int count = 0;

        while (i <= mid && j <= r) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                count += mid - i + 1;
            }
        }

        while (i <= mid)
            temp[k++] = arr[i++];

        while (j <= r)
            temp[k++] = arr[j++];

        for (i = l, k = 0; i <= r; i++)
            arr[i] = temp[k++];

        return count;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1)