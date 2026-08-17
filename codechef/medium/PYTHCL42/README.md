# PYTHCL42

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### String slicing

Listen

Slicing is a way to extract a part (substring) from a string.

The syntax to do that is

```
substring = string[start:end]

```

When you specify a start index in a string slice, Python includes the character at that index as the starting point of your new substring.

The end index is exclusive. This means the character at the end index is not included in the resulting substring. The slice stops just before it.

To get the first 4 characters of a string:

```
str = 'Interesting'
substring = str[0:4]
print(substring)

```

 **Output** 

```
Inte

```

Note that the character at position 0 (**I**) is included in the output, but the character at position 4 (**r**) is excluded.

### Task
- Declare a string variable var
- Assign the value String to it
- Use string slicing to print ring to the console.

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T10:25:50.718Z  

```py
var = "String"
print(var[2:6])

```

---

[View on CodeChef](https://www.codechef.com/problems/PYTHCL42)