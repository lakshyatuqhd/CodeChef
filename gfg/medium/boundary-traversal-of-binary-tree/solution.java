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