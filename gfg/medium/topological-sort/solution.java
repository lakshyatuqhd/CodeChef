
class Solution {
    ArrayList<Integer> topoSort(ArrayList<ArrayList<Integer>> adj) {
        int V = adj.size();
        int[] indegree = new int[V];

        for (int i = 0; i < V; i++) {
            for (int v : adj.get(i)) {
                indegree[v]++;
            }
        }

        Queue<Integer> q = new LinkedList<>();

        for (int i = 0; i < V; i++) {
            if (indegree[i] == 0) {
                q.add(i);
            }
        }

        ArrayList<Integer> ans = new ArrayList<>();

        while (!q.isEmpty()) {
            int u = q.poll();
            ans.add(u);

            for (int v : adj.get(u)) {
                indegree[v]--;

                if (indegree[v] == 0) {
                    q.add(v);
                }
            }
        }

        return ans;
    }
}

