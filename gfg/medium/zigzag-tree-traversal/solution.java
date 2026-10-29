class Solution {
    ArrayList<Integer> zigZagTraversal(Node root) {
        ArrayList<Integer> ans = new ArrayList<>();
        if (root == null)
            return ans;

        Queue<Node> q = new LinkedList<>();
        q.add(root);
        boolean leftToRight = true;

        while (!q.isEmpty()) {
            int size = q.size();
            ArrayList<Integer> level = new ArrayList<>();

            for (int i = 0; i < size; i++) {
                Node cur = q.poll();
                level.add(cur.data);

                if (cur.left != null)
                    q.add(cur.left);
                if (cur.right != null)
                    q.add(cur.right);
            }

            if (!leftToRight)
                Collections.reverse(level);

            ans.addAll(level);
            leftToRight = !leftToRight;
        }

        return ans;
    }
}