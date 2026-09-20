# OJJAR47

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Sum Total Amount Spent

You are given an array of strings, where each string is a word. Your task is to find and return the longest word in the array. If there are multiple words with the same maximum length, return the one that appears first. Use the `reduce()` method to solve this problem.

## Solution

**Language:** JavaScript  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-20T14:59:37.582Z  

```js
const words = ["apple", "banana", "cherry", "watermelon", "kiwi"];
const longestWord = words.reduce((longest, current ) => {
    return current.length > longest.length ? current : longest;
});
console.log(longestWord);
// complete the code 




```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR47)