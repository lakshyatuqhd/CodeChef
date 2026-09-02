# DEBUGPYP61

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Debug the code - 6

Listen

There are N bikes and M cars on the road.

- Each bike has 2 tyres.
- Each car has 4 tyres. Find the total number of tyres on the road.
### Input Format
- The first and only line of each test case contains two integers N,M.
### Output Format
- For each test case, output in a single line, the total number of tyres on the road.
### Constraints
- 0 ≤ N, M ≤ 100.
### Sample 1:
Input
Output

```
2 1
```

```
8
```

### Sample 2:
Input
Output

```
3 0
```

```
6
```

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T07:12:11.109Z  

```py
# your code goes here
N, M = map(int, input().split())
print(N*2 + M*4)  # wrong previous operations

```

---

[View on CodeChef](https://www.codechef.com/problems/DEBUGPYP61)