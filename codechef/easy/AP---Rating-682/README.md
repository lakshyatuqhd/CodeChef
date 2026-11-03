# AP - Rating 682

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Make Arithmetic Progression

You are given three positive integers $X, Y,$ and $Z$.
In one operation, you can choose any one of these values, and change it to  *any*  integer of your choice.

Find the  **minimum**  number of operations required to make the sequence $(X, Y, Z)$ an arithmetic progression.
Note that $(X, Y, Z)$ is an arithmetic progression if and only if $Y-X = Z-Y$.

### Input Format
- The first line of input contains a single integer $T$, denoting the number of testcases.
- The first and only line of each testcase contains three space-separated integers $X, Y$ and $Z$, denoting the three numbers.
### Output Format

For each test case, print one line containing a single integer: the  **minimum**  number of operations such that $(X, Y, Z)$ forms an arithmetic progression.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq X,Y,Z \leq 100$
### Sample 1:
Input
Output

```
2
2 5 8
7 4 3

```

```
0
1

```

### Explanation:

 **Test case $1$:**  $Y - X = 3$ and $Z - Y = 3$ which are already equal. So, $(X, Y, Z)$ is already an arithmetic progression, no moves are required.

 **Test case $2$:**  We use one operation and change $Z$ to $1$, so that $(X, Y, Z) = (7, 4, 1)$.
Now, $Y - X = -3$ and $Z - Y = -3$ which are equal, so this is an arithmetic progression.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T11:52:00.614Z  

```java
import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (!sc.hasNextInt()) return;
        int T = sc.nextInt();
        while (T-- > 0) {
            int X = sc.nextInt();
            int Y = sc.nextInt();
            int Z = sc.nextInt();
            System.out.println(minOperations(X, Y, Z));
        }
        sc.close();
    }

    public static int minOperations(int X, int Y, int Z) {
        if (Y - X == Z - Y) {
            return 0;
        }
        return 1;
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/AP)