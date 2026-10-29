import java.util.*;

class Solution {
    public ArrayList<Integer> dfs(ArrayList<ArrayList<Integer>> adj) {
        ArrayList<Integer> res = new ArrayList<>();
        boolean[] visited = new boolean[adj.size()];

        solve(0, adj, visited, res);

        return res;
    }

    void solve(int node, ArrayList<ArrayList<Integer>> adj,
               boolean[] visited, ArrayList<Integer> res) {
        visited[node] = true;
        res.add(node);

        for (int x : adj.get(node)) {
            if (!visited[x])
                solve(x, adj, visited, res);
        }
    }
}