# SESO03

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Linear Search in array

Write a program to search for a specific element in an array and print " **Yes** " if the element is present, otherwise print " **No** ".

### Input Format
- The first line contains an integer $n$, the length of the array and $k$, the element to be search.
- The second line contains $n$ space-separated integers representing the elements of the array.
### Output Format
- Print "Yes" if the element $k$ is present in the array.
- Print "No" if the element $k$ is not present in the array.
### Sample 1:
Input
Output

```
8 1
3 5 1 4 5 6 5 6
```

```
Yes
```

### Sample 2:
Input
Output

```
3 4
1 2 3
```

```
No
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-04T07:31:50.273Z  

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the length of the array
        int n = scanner.nextInt();

        // Read the element to search for
        int k = scanner.nextInt();

        // Read the array elements
        int[] array = new int[n];
        for (int i = 0; i < n; ++i) {
            array[i] = scanner.nextInt();
        }
        boolean found = false;

        for (int i = 0; i < n; ++i) {
            if (array[i] == k) {
                found = true;
                break;
            }
        }
        if (found) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SESO03)