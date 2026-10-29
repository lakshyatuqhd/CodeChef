# Celebrity Problem

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Consider a party being organized by some people. A celebrity is a person who is known to all but does not know anyone at the party. 

- A square matrix mat[][] of size n * n is used to represent people at the party such that if an element of row i and column j is set to 1 it means ith person knows jth person.
- You need to return index of the celebrity in the party.
- If the celebrity does not exist, return -1.

 **Note:**  Follow 0-based indexing.

 **Examples:** 

```
Input: mat[][] = [[1, 1, 0],
                 [0, 1, 0],
                 [0, 1, 1]]
Output: 1
Explanation: 0th and 2nd person both know 1st person and 1st person does not know anyone. Therefore, 1 is the celebrity person.
```

```
Input: mat[][] = [[1, 1], 
                 [1, 1]]
Output: -1
Explanation: Since both the people at the party know each other. Hence none of them is a celebrity person.
```

```
Input: mat[][] = [[1]]
Output: 0
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T10:26:03.902Z  

```java

class Solution {
    public int celebrity(int mat[][]) {
        int n = mat.length;

        for (int i = 0; i < n; i++) {
            boolean celebrity = true;

            for (int j = 0; j < n; j++) {
                if (i != j && (mat[i][j] == 1 || mat[j][i] == 0)) {
                    celebrity = false;
                    break;
                }
            }

            if (celebrity) {
                return i;
            }
        }

        return -1;
    }
}

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1)