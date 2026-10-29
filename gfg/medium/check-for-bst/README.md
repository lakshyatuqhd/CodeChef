# Check for BST

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a binary tree, check whether it is a Binary Search Tree (BST) or not. A binary tree is considered a BST if it satisfies the following properties:
- All nodes in the left subtree of a node have values less than the node's value.
- All nodes in the right subtree of a node have values greater than the node's value.
- Both the left and right subtrees are also Binary Search Trees.
Return true if the given binary tree is a BST; otherwise, return false.

 **Examples:** 

```
Input: root = [2, 1, 3, N, N, N, 5]

Output: true 
Explanation: The left subtree of every node contains smaller data and right subtree of every node contains greater data. Hence, the tree is a BST.

```

```
Input: root = [2, N, 7, N, 6, N, 9] 

Output: false 
Explanation: Since the node to the right of node with data 7 has lesser value 6, hence it is not a valid BST.
```

```
Input: root = [10, 5, 20, N, N, 9, 25]

Output: false
Explanation: The node with data 9 present in the right subtree has lesser key value than root node 10.
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T10:01:23.146Z  

```java
class Solution {
    public boolean isBST(Node root) {
        return check(root, Long.MIN_VALUE, Long.MAX_VALUE);
    }

    boolean check(Node root, long min, long max) {
        if (root == null)
            return true;

        if (root.data <= min || root.data >= max)
            return false;

        return check(root.left, min, root.data) &&
               check(root.right, root.data, max);
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/check-for-bst/1)