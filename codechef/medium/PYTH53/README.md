# PYTH53

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Taking user input

Listen

You have already learned that 'print' is used to output values.
Now we will use 'input()' to get user input. Watch this video to understand how input() function works in Python

So you understood from the video the different ways in which input can be read. Let's take another example - the following commands will be used to get the name and age from user.
The program then prints out the greeting using the variables $name$ and $age$.

```
name = input()
print("Hello, " + name + "!")

age = input()
print("You are " + age + " years old.")

```

 **`input()`**  assumes that the input is a string.
You can convert it to an integer or numerical value using  **`int()`** 

```
age = int(input())
print("You are", age, "years old.")

```

### Task

Write a program which does the following

- Declare an integer variable num
- Try taking a number from the console and assign it to num
- Output num to the console
### Sample 1:
Input
Output

```
76
```

```
76
```

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T10:36:39.642Z  

```py
# Solution as follows

num = int(input())
print(num)
```

---

[View on CodeChef](https://www.codechef.com/problems/PYTH53)