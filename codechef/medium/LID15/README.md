# LID15

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Negative Indexing

Listen

List items can also be negatively indexed:

```
            -3      -2     -1      - index numbers
         ["red","Green","Blue"]  - the list

```

 **Note**  - Indexing always starts from  **`-1`**  when going right to left.

Write a program which does the following:

- Create a list containing the elements - "lock", "key", "barrier", "sign" and "door"
- Print the 2nd last element from the given list. i.e. - reading from right to left, print the 2nd element

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T07:18:07.135Z  

```py
list = ["lock","key","barrier","sign","door"]
print(list[ -2 ])
```

---

[View on CodeChef](https://www.codechef.com/problems/LID15)