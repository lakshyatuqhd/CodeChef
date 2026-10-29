# Tree Boundary Traversal

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a root of a Binary Tree, return its boundary traversal in the following order:

- Left Boundary: Nodes from the root to the leftmost non-leaf node, preferring the left child over the right and excluding leaves.
- Leaf Nodes: All leaf nodes from left to right, covering every leaf in the tree.
- Reverse Right Boundary: Nodes from the root to the rightmost non-leaf node, preferring the right child over the left, excluding leaves, and added in reverse order.

 **Note:**  The root is included once, leaves are added separately to avoid repetition, and the right boundary follows traversal preference not the path from the rightmost leaf.

 **Examples:** 

```
Input: root = [1, 2, 3, 4, 5, 6, 7, N, N, 8, 9, N, N, N, N]
Output: [1, 2, 4, 8, 9, 6, 7, 3]
Explanation:

```

```
Input: root = [1, N, 2, N, 3, N, 4, N, N] 
Output: [1, 4, 3, 2]
Explanation:

Left boundary: [1] (as there is no left subtree)
Leaf nodes: [4]
Right boundary: [3, 2] (in reverse order)
Final traversal: [1, 4, 3, 2]
```

 **Constraints:** 
1 ≤ number of nodes ≤ 105
1 ≤ node->data ≤ 105

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T10:12:30.497Z  

```java
class Solution {
    ArrayList<Integer> boundaryTraversal(Node root) {
        ArrayList<Integer> ans = new ArrayList<>();

        if (root == null)
            return ans;

        if (root.left == null && root.right == null) {
            ans.add(root.data);
            return ans;
        }

        ans.add(root.data);

        Node cur = root.left;
        while (cur != null) {
            if (cur.left != null || cur.right != null)
                ans.add(cur.data);

            if (cur.left != null)
                cur = cur.left;
            else
                cur = cur.right;
        }

        addLeaves(root, ans);

        ArrayList<Integer> right = new ArrayList<>();
        cur = root.right;

        while (cur != null) {
            if (cur.left != null || cur.right != null)
                right.add(cur.data);

            if (cur.right != null)
                cur = cur.right;
            else
                cur = cur.left;
        }

        for (int i = right.size() - 1; i >= 0; i--)
            ans.add(right.get(i));

        return ans;
    }

    void addLeaves(Node root, ArrayList<Integer> ans) {
        if (root == null)
            return;

        if (root.left == null && root.right == null) {
            ans.add(root.data);
            return;
        }

        addLeaves(root.left, ans);
        addLeaves(root.right, ans);
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1)