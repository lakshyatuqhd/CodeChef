# PYTHCL40

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Outputting Characters from a String

Listen

As you work with strings, you will find the need to deal with each character in it. For example, fetching a specific character of a string. Let's look at how this can be done using indexing in this video.

So you learned that we can access the characters in a string by referring to its `index number` inside square brackets  **[ ]**.

This concept is known as indexing.
Indexing allows you to access individual characters in a string using their position.
The position is known as the index, and Python supports two kinds of indexing:  **positive**  and  **negative**  indexing.

- Positive Indexing: Starts from the beginning of the string. The first character is at index 0, the second is at index 1, and so on.

```
s = "Codechef"
print(s[0]) # Output: C
print(s[1]) # Output: o

```

- Negative Indexing: Starts from the end of the string. The last character is at index '-1', the second to last is at index '-2', and so on.

```
s = "Codechef"
print(s[-1]) # Output: f
print(s[-2]) # Output: e

```

### Task

Write a program which does the following

- Create a string variable word and assign the text Programming to it
- Print the characters o and r from the string word in separate lines using the syntax defined above

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T10:23:37.807Z  

```py
# Solution as follows

word = "Programming"

print(word[2])
print(word[1])
```

---

[View on CodeChef](https://www.codechef.com/problems/PYTHCL40)