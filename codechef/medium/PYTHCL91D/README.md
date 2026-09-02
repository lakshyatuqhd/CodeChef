# PYTHCL91D

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Debug the code - 6

Listen

The code in the IDE checks if a given number is positive or negative, and if it's positive, it further checks if it's even or odd.Also check if the number is Zero. But this program has errors. Run the program to check the error and fix it.

### Sample 1:
Input
Output

```
5
```

```
The number is positive
The number is odd
```

### Sample 2:
Input
Output

```
0
```

```
The number is zero
```

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T07:11:01.680Z  

```py
number = int(input())

if number > 0:
    print("The number is positive")
    if number % 2 == 0:
        print("The number is even")
    else:
        print("The number is odd")
elif number < 0:
    print("The number is negative")
else:
    print("The number is zero")


```

---

[View on CodeChef](https://www.codechef.com/problems/PYTHCL91D)