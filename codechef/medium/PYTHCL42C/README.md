# PYTHCL42C

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Changing character using slicing

Listen

You can also use slicing to change the value of a character.
We can achieve this by slicing the string into parts before and after the character to be changed, then concatenate these parts with the new character in between.

```
string = 'Chaf'
new_string = string[:2] + 'e' + string[3:]
print(new_string) # Output: Chef
# This code modifies the string 'Chaf' to 'Chef'

```

Here's what's happening:

```
string[:2]   # Takes the first two letters from the original word i.e, 0 to 1. In this case, it extracts 'Ch'
e            # This is the new character we want to replace the existing character at index 2 with.
string[3:]   # Takes all letters from the third index to the end. In this case, it extracts 'f'.

```

By concatenating these three parts together (**`string[:2] + 'e' + string[3:]`**), we create a new string where the original character at index 2 is replaced with 'e'.
So, `new_string` becomes 'Chef'.

### Task:
- You are given a string variable named original_string and variable index_to_modify that stores an index value.
- Use slicing to replace the character at the specified index (index_to_modify) with a new character provided in new_char, and then print the modified string.

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T10:28:53.499Z  

```py
original_string = "saffix"
index_to_modify = 1
new_char = 'u'
print(original_string[:index_to_modify]+new_char+original_string[2:])
```

---

[View on CodeChef](https://www.codechef.com/problems/PYTHCL42C)