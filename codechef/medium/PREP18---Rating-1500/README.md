# PREP18 - Rating 1500

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Find Array Min

You're given three non-decreasing arrays $A$, $B$, $C$ of length $N_A$, $N_B$, $N_C$. We define,

$f(i, j, k) = \max{(|A_i - B_j|, |B_j - C_k|, |A_i - C_k|)}$ where $1 \leq i \leq N_A, 1 \leq j \leq N_B, 1 \leq k \leq N_C$

Find the  **minimum**  possible value of $f(i, j, k)$ over all possible value of $i$, $j$, $k$.

Note: Array $A$ being non-decreasing means that $A_1 \leq A_2 \leq \dots \leq A_N$.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first line of each test case contains three space-separated integers $N_A$, $N_B$, $N_C$ — the number of elements in the array $A$, $B$, $C$.
- The second line of each test case contains $N_A$ space-separated integers $A_1,A_2,\ldots,A_{N_A}$ — the elements of array $A$.
- The third line of each test case contains $N_B$ space-separated integers $B_1,B_2,\ldots,B_{N_B}$ — the elements of array $B$.
- The fourth line of each test case contains $N_C$ space-separated integers $C_1,C_2,\ldots,C_{N_C}$ — the elements of array $C$.
### Output Format

For each test case, output on a new line the  **minimum**  possible value of $f(i, j, k)$.

### Constraints
- $1 \leq T \leq 10$
- $1 \leq N_A, N_B, N_C \leq 10^5$
- $1 \leq A_i, B_i, C_i \leq 10^9$
### Sample 1:
Input
Output

```
3
4 2 2
2 5 10 15
4 4
10 15
1 1 1
5 
10
25
6 6 2
4 8 10 15 15 20
6 15 25 28 28 45 
10 15

```

```
6
20
0

```

### Explanation:

 **Test case $1$** : Minimum value will be $f(3, 1, 1) = \max{(|10 - 4|, |4 - 10|, |10 - 10|)} = 6$.

 **Test case $2$** : Minimum value will be $f(1, 1, 1) = \max{(|5 - 10|, |10 - 25|, |25 - 5|)} = 20$.

 **Test case $3$** : Minimum value will be $f(4, 2, 2) = \max{(|15 - 15|, |15 - 15|, |15 - 15|)} = 0$.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T13:22:17.393Z  

```java

import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        for (int t = 0; t < T; t++) {
            int NA = in.nextInt(), NB = in.nextInt(), NC = in.nextInt();
            int[] A = new int[NA];
            int[] B = new int[NB];
            int[] C = new int[NC];
            for (int i = 0; i < NA; i++) {
                A[i] = in.nextInt();
            }
            for (int i = 0; i < NB; i++) {
                B[i] = in.nextInt();
            }
            for (int i = 0; i < NC; i++) {
                C[i] = in.nextInt();
            }
            int i = 0, j = 0, k = 0;
            int ans = Integer.MAX_VALUE;
            while (i < NA && j < NB && k < NC) {
                int minVal = Math.min(A[i], Math.min(B[j], C[k]));
                int maxVal = Math.max(A[i], Math.max(B[j], C[k]));
                ans = Math.min(ans, maxVal - minVal);
                if (minVal == A[i]) {
                    i++;
                } else if (minVal == B[j]) {
                    j++;
                } else {
                    k++;
                }
            }
            System.out.println(ans);
        }
        in.close();
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/PREP18)