# PYTHCL42B

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Reverse slicing

Listen

You can use [start:end:step] format to print a string in reverse. Let's see how.

We know when slicing, the traversal (movement) always happens from left to right. But there is a way to traverse from right to left by mentioning a negative step.

```
s='abcde'
print(s[4:0:-1]) # Output: edcb

```

When you mention a negative step the slicing starts from right to left.
So, your start index will be 4 and the slicing stops at 1 because the end index is 0

If you had to print the entire string in reverse then you write:

```
print(s[::-1]) # Output: edcba

```

- When you mention empty start index it will start from the very beginning,
- And if the end index is empty it goes all the way till the end,
- And since the step is negative the slicing starts from the right and goes all the way to the left

 **Note** :

- The only way you can traverse from right to left (in reverse) is by mentioning a negative step, in all other slicing formats the traversal always happens from left to right

#### Task

You are given a string variable `text` with the value 'Playground'. Your task is to perform the following operation on the string using slicing:

- Extract characters from index 2 to index 6 (both inclusive) and print them in reverse order

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T10:30:24.321Z  

```py
text = "Playground"
print(text[6:1:-1])
```

---

[View on CodeChef](https://www.codechef.com/problems/PYTHCL42B)