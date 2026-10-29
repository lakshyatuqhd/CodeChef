import java.util.*;

class Solution {
    public boolean isCycle(ArrayList<ArrayList<Integer>> adj) {
        int n = adj.size();
        boolean[] visited = new boolean[n];

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                if (dfs(i, -1, adj, visited))
                    return true;
            }
        }

        return false;
    }

    boolean dfs(int node, int parent,
                ArrayList<ArrayList<Integer>> adj,
                boolean[] visited) {
        visited[node] = true;

        for (int x : adj.get(node)) {
            if (!visited[x]) {
                if (dfs(x, node, adj, visited))
                    return true;
            } else if (x != parent) {
                return true;
            }
        }

        return false;
    }
}