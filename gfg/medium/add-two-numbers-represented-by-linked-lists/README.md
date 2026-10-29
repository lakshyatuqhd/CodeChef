# Add Number Linked Lists

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given the head of two singly linked lists  **head1**  and  **head2**  representing two non-negative integers. You need to return the  **head**  of the linked list representing the  **sum**  of these two numbers.

 **Note:** There can be leading zeros in the input lists, but there should not be any leading zeros in the output list.

 **Examples:** 

```
Input: 
    
Output:  1 -> 1 -> 2 -> 2
Explanation: Given numbers are 123 and 999. There sum is 1122.
    

```

```
Input: 
    
Output: 7 -> 0 
Explanation: Given numbers are 63 and 7. There sum is 70.
    
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T10:26:44.057Z  

```java

class Solution {
    public Node addTwoLists(Node head1, Node head2) {
        head1 = removeZeros(head1);
        head2 = removeZeros(head2);

        head1 = reverse(head1);
        head2 = reverse(head2);

        Node dummy = new Node(0);
        Node temp = dummy;
        int carry = 0;

        while (head1 != null || head2 != null || carry != 0) {
            int sum = carry;

            if (head1 != null) {
                sum += head1.data;
                head1 = head1.next;
            }

            if (head2 != null) {
                sum += head2.data;
                head2 = head2.next;
            }

            temp.next = new Node(sum % 10);
            temp = temp.next;
            carry = sum / 10;
        }

        Node ans = reverse(dummy.next);
        return ans == null ? new Node(0) : removeZeros(ans);
    }

    Node reverse(Node head) {
        Node prev = null;

        while (head != null) {
            Node next = head.next;
            head.next = prev;
            prev = head;
            head = next;
        }

        return prev;
    }

    Node removeZeros(Node head) {
        while (head != null && head.data == 0 && head.next != null) {
            head = head.next;
        }

        return head;
    }
}

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1)