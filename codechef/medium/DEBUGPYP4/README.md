# DEBUGPYP4

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Debug the code - 4

Listen

Chef is looking to buy a TV and has shortlisted two models.
The first one costs A rupees, while the second one costs B rupees.
Since there is a huge sale coming up on Chefzon, Chef can get a flat discount of C rupees on the first TV, and a flat discount of D rupees on the second one.
Help Chef determine which of the two TVs would be cheaper to buy during the sale.

### Input Format
- The first and only line of each test case contains four space-separated integers A, B, C and D — the marked price (in rupees) of the first TV, the marked price (in rupees) of the second TV, the flat discount (in rupees) of the first TV, and the flat discount (in rupees) of the second TV.
### Output Format

For each test case, print a single line containing the string First if the first TV is cheaper to buy with discount, or Second if the second TV is cheaper to buy with discount. If both of them cost the same after discount, print Any.

### Constraints
- 1 ≤ A, B ≤ 100
- 0 ≤ C ≤ A
- 0 ≤ D ≤ B
### Sample 1:
Input
Output

```
85 75 35 20
```

```
First
```

### Sample 2:
Input
Output

```
100 99 0 0
```

```
Second
```

### Sample 3:
Input
Output

```
30 40 0 10
```

```
Any
```

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T07:11:31.248Z  

```py
# your code goes here
a, b, c, d = map(int, input().split())
p = a - c # price of tv1 after discount was calculated wrong
q = b - d # price of tv2 after discount was calculated wrong
if p < q:
    print("First")
elif p > q:
    print("Second")
else:
    print("Any")

```

---

[View on CodeChef](https://www.codechef.com/problems/DEBUGPYP4)