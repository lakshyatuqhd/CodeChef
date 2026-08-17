# PYTHCL42A

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### String slicing

Listen

There's another syntax to slice a string:

```
substring = string[start:end:step]

```

Step is how many characters you move forward each time you read. If your step is 1, you read one character at a time. If your step is 2, you skip one character and then read the next one.

Let's say our string is 'abcde':

```
s = 'abcde'
print(s[0:4:2]) # Output: ac

```

Here, the step is set to 2, so it takes 2 jumps after reading each character.
The character at the start index 0 is  **a**. Then, it jumps by 2 characters and gets  **c**.
Once it reaches  **c**, it stops because the end index is set to 4, so the traversal happens from index 0 to index 3.

### Task
- Given a string slice all the characters with even index and print the output. i.e, characters at index 0, 2, 4...

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T10:26:49.500Z  

```py
var = "String"
print(var[0:5:2])

```

---

[View on CodeChef](https://www.codechef.com/problems/PYTHCL42A)