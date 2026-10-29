# Topological Sort

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a Directed Acyclic Graph (DAG) with  **V**  vertices numbered from 0 to V - 1, represented by an adjacency list  **adj[][]**, return a topological ordering of its vertices.

A topological ordering is a linear ordering of vertices such that for every directed edge u -> v, vertex u appears before vertex v in the ordering.

 **Note:** Multiple valid topological orderings may exist. Any valid ordering is accepted. The output is true if the returned ordering is valid; otherwise, it is false.

 **Examples:** 

```
Input: adj[][] = [[], [0], [0], [0]]

Output: true
Explanation: The output true denotes that the order is valid. Few valid Topological orders for the given graph are:
[3, 2, 1, 0]
[1, 2, 3, 0]
[2, 3, 1, 0]
```

```
Input: adj[][] = [[], [3], [3], [], [1, 0], [0, 2]]

Output: true
Explanation: The output true denotes that the order is valid. Few valid Topological orders for the graph are:
[4, 5, 0, 1, 2, 3]
[5, 2, 4, 0, 1, 3]
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T10:21:45.646Z  

```java

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


```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/topological-sort/1)