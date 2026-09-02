# DEBUGPYP5

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Debug the code - 5

Listen

Chef wants to gift C chocolates to Botswal on his birthday.
However, he has only X chocolates with him.
The cost of 1 chocolate is Y rupees.

Find the minimum money in rupees Chef needs to spend so that he can gift C chocolates to Botswal.

### Input Format
- Each test case contains of a single line of input, three integers C,X, and Y.
### Output Format

For each test case, output in a single line answer, the minimum money in rupees Chef needs to spend.

### Constraints
- 1 ≤ C ≤ 100
- 0 ≤ X ≤ C
- 1 ≤ Y ≤ 100
### Sample 1:
Input
Output

```
7 5 5
```

```
10
```

### Explanation:

Chef has to gift a total of 7 chocolates out of which he has 5 chocolates. Thus, Chef needs to buy 2 more chocolates, which costs him 10 rupees.

### Sample 2:
Input
Output

```
10 1 1
```

```
9
```

### Explanation:

Chef has to gift a total of 10 chocolates out of which he has 1 chocolate. Thus, Chef needs to buy 9 more chocolates, which costs him 9 rupees.

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T07:11:49.386Z  

```py
c, x, y = map(int, input().split())
print((c - x)* y) #previous opertaions were incorrect

```

---

[View on CodeChef](https://www.codechef.com/problems/DEBUGPYP5)