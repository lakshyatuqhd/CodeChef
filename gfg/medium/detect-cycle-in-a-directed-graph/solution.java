class Solution {
    public boolean isCyclic(ArrayList<ArrayList<Integer>> adj) {
        int n = adj.size();
        boolean[] visited = new boolean[n];
        boolean[] path = new boolean[n];

        for (int i = 0; i < n; i++) {
            if (!visited[i] && dfs(i, adj, visited, path))
                return true;
        }
        return false;
    }

    boolean dfs(int u, ArrayList<ArrayList<Integer>> adj,
                boolean[] visited, boolean[] path) {
        visited[u] = true;
        path[u] = true;

        for (int v : adj.get(u)) {
            if (!visited[v]) {
                if (dfs(v, adj, visited, path))
                    return true;
            } else if (path[v]) {
                return true;
            }
        }

        path[u] = false;
        return false;
    }
}