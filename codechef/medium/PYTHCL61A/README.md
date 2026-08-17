# PYTHCL61A

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### String inputs

Listen

Write a program that takes 3 string inputs from the user: a `name`, a `verb`, and a `place`. Use these inputs to construct a sentence in the following format:

`"<name> is <verb> in the <place>"`

### Sample 1:
Input
Output

```
Alice dancing park
```

```
Alice is dancing in the park
```

### Sample 2:
Input
Output

```
Rohan chilling club
```

```
Rohan is chilling in the club
```

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T10:48:53.258Z  

```py
# Solution as follows

name, verb, place = input().split()
print(name, "is", verb, "in the", place)

```

---

[View on CodeChef](https://www.codechef.com/problems/PYTHCL61A)