# PYTHCL50D

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Multiple integer inputs

Listen

The syntax you saw in the previous lesson takes string inputs. But if you need to take multiple integer inputs, you'll have to convert them separately.

You cannot call the int function directly on the split input as int function can only be called on one value as a time and split input has multiple values.

To handle this, you can use the map function to convert the split inputs to integers in one step. Here's how you can do it:

```
a, b, c = map(int, input().split())   # assigns integer input values to variables a, b and c

```

What map does is, it takes the list of multiple inputs and applies the integer function to each input in the list.

### Task

You are given $3$ integer inputs $a, b, c$ in the first line and $2$ integer inputs on the second line $d, e$. output the sum of all the integers i.e. output $a+b+c+d+e$

### Sample 1:
Input
Output

```
1 2 3
4 5
```

```
15
```

### Sample 2:
Input
Output

```
4 2 2
1 1
```

```
10
```

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T10:41:10.593Z  

```py
# Solution as follows

a, b, c = map(int, input().split())
d, e = map(int, input().split())
print (a+b+c+d+e)
```

---

[View on CodeChef](https://www.codechef.com/problems/PYTHCL50D)