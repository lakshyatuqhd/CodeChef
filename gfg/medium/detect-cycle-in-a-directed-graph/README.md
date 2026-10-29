# Directed Graph Cycle

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a directed graph with  **V**  vertices, numbered from 0 to V - 1, represented by an adjacency list  **adj[][]**, where adj[u] contains all vertices reachable from vertex u through a directed edge, check whether the graph contains a cycle.

 **Note:** The graph may have multiple connected components. Self-loops are allowed, but repeated edges are not allowed.

 **Examples:** 

```
Input: adj = [[1], [2], [0, 3], []]

Output: true
Explanation: The diagram clearly shows a cycle 0 -> 1 -> 2 -> 0
```

```
Input: adj = [[1], [2], [3], []]

Output: false
Explanation: The graph does not contain any cycle.
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T10:11:09.830Z  

```java
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
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1)