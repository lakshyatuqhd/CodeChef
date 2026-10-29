# Undirected Graph Cycle

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an undirected graph with  **V**  vertices, represented by an adjacency list  **adj[][]**, where adj[u] contains all vertices adjacent to vertex u, check whether the graph contains a cycle.

 **Note:**  The graph may have multiple connected components.

 **Examples:** 

```
Input: adj[][] = [[1, 2], [0, 2], [0, 1, 3], [2]]
Output: true
Explanation: 

1 -> 2 -> 0 -> 1 is a cycle.

```

```
Input: adj[][] = [[1], [0, 2], [1, 3], [2]]
Output: false
Explanation: 

No cycle in the graph.

```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T10:05:43.995Z  

```java
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
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1)