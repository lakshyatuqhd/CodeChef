# PYTHCL91A

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Debug the code - 3

Listen

The code in the IDE checks if a number is positive, negative or zero. But this program has a compilation error. Run the program to check the error and fix it.

### Sample 1:
Input
Output

```
5
```

```
The number is positive
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

### Sample 3:
Input
Output

```
-3
```

```
The number is negative
```

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-31T09:42:23.928Z  

```py
number = int(input())
if number > 0:
    print("The number is positive")
elif number == 0:
    print("The number is zero")
else:
    print("The number is negative")

```

---

[View on CodeChef](https://www.codechef.com/problems/PYTHCL91A)