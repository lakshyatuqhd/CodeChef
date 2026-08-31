# DEBUGPYP2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Debug the code - 2

Listen

Chef considers the climate HOT if the temperature is above 20, otherwise he considers it COLD.
You are given the temperature C, find whether the climate is HOT or COLD.

### Input Format
- The first and only line of each test case contains a single integer, the temperature C
### Output Format

print on a new line whether the climate is HOT or COLD.

You may print each character of the string in either uppercase or lowercase (for example, the strings hOt, hot, Hot, and HOT will all be treated as identical).

### Constraints
- 0≤C≤40
### Sample 1:
Input
Output

```
21
```

```
HOT
```

### Explanation:

The temperature is 21, which is more than 20. So, Chef considers the climate HOT.

### Sample 2:
Input
Output

```
16
```

```
COLD
```

### Explanation:

The temperature is 16, which is not more than 20. So, Chef considers the climate COLD.

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-31T09:41:47.903Z  

```py
# your code goes here
C = int(input())
if C > 20:    # previous codition C<10 was wrong
    print("HOT")
else:
    print("COLD")

```

---

[View on CodeChef](https://www.codechef.com/problems/DEBUGPYP2)