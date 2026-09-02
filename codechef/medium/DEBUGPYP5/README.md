# DEBUGPYP5

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T07:11:34.542Z  

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

[View on CodeChef](https://www.codechef.com/problems/DEBUGPYP5)