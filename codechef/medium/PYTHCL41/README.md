# PYTHCL41

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Changing Characters in a String

Listen

In Python, strings are immutable, which means you cannot directly update or change a character in a string.

For example

```
myString = "Chaf"
myString[2] = 'e'

```

If you run the above program, you will get a `compilation error`.

However, you can create a new string with the desired changes.
Here's an example of how you can replace the character:

```
myString = "Chaf"
myString_new = myString.replace('a', 'e')  
print(myString_new)      #This string has the correct values

# Please note that, replace() method replaces all occurrences of the provided character.

```

### Task

Write a program which does the following

- Initialise a string variable word and assign the value Ocygen to it.
- You now want to fix the typo in the given string.
- Use the syntax explained above to replace 'c' with 'x' in a new variable word_new.
- Output the updated word_new to console.

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T10:25:15.788Z  

```py
# Solution as follows

word = "Ocygen"
word_new = word.replace('c', 'x')
print(word_new)
```

---

[View on CodeChef](https://www.codechef.com/problems/PYTHCL41)