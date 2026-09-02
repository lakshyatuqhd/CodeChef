# LID2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Slicing a list

Listen

Similar to what we saw in slicing of strings, you can slice lists as well.
You can specify a range of consecutive indexes by specifying where to start and where to end the range in this manner - `print(list[1:4])`.
This will print elements from index number  **1**  to  **3**.

 **Note** :

- Indexing starts from 0.
- Item on index no 4 will not be printed as the end index is excluded.

For eg -

```
a = ["Juke", "King", "Hearts", "68", "Kite"]
print(a[1:4])

```

The output will be

```
["King", "Hearts", "68"]

```

### Task

Write a program which does the following:

- Create a list m of the first 7 months in a year
- Output the following to the console on separate lines Print the first 6 months of the year Print the 2nd to 5th month of the year - both 2nd and 5th included

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T07:23:17.062Z  

```py
# Solution as follows

months = ["January", "February", "March", "April", "May", "June", "July"]

print(months[0:6])

print(months[1:5])
```

---

[View on CodeChef](https://www.codechef.com/problems/LID2)