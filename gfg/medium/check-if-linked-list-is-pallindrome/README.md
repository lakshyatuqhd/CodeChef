# Palindrome Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given the  **head**  of a singly linked list of positive integers. You have to check if the given linked list is  **palindrome** or not.

 **Examples:** 

```
Input:
   
Output: true
Explanation: The given linked list is 1 -> 2 -> 1 -> 1 -> 2 -> 1, which is a palindrome.

```

```
Input:
   
Output: false
Explanation: The given linked list is 10 -> 20 -> 30 -> 40 -> 50, which is not a palindrome.
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T10:30:21.051Z  

```java
class Solution {
    public boolean isPalindrome(Node head) {
        ArrayList<Integer> list = new ArrayList<>();

        Node temp = head;

        while (temp != null) {
            list.add(temp.data);
            temp = temp.next;
        }

        int i = 0, j = list.size() - 1;

        while (i < j) {
            if (!list.get(i).equals(list.get(j)))
                return false;

            i++;
            j--;
        }

        return true;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1)