# Rat in Maze

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a binary matrix  **maze[][]**  of size **n × n**  containing values  **0**  and  **1**, find all possible paths for a rat to travel from the source cell (0, 0) to the destination cell (n - 1, n - 1). The rat can move in four directions: up(U), down(D), left(L), and right(R).

- 1 represents an open cell through which the rat can move.
- 0 represents a blocked cell that cannot be traversed.

The rat can move only through open cells and cannot visit the same cell more than once in a path. Return all valid paths as strings consisting of 'U', 'D', 'L', and 'R', representing the sequence of moves taken by the rat.

 **Note:**  Return the paths in lexicographically increasing order. If no valid path exists, return an empty list.

 **Examples:** 

```
Input: maze[][] = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}}
Output: ["DDRDRR", "DRDDRR"]
Explanation: There are two valid paths from the source cell (0, 0) to the destination cell (3, 3).

```

```
Input: maze[][] = [[1, 0], [1, 0]]
Output: []
Explanation: No path exists as the destination cell (1, 1) is blocked.

```

 **Constraints:** 
2 ≤ n ≤ 5
0 ≤ maze[i][j] ≤ 1

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T09:59:59.105Z  

```java
import java.util.*;

class Solution {
    public ArrayList<String> ratInMaze(int[][] maze) {
        ArrayList<String> ans = new ArrayList<>();
        int n = maze.length;

        if (maze[0][0] == 0)
            return ans;

        boolean[][] visited = new boolean[n][n];

        solve(0, 0, maze, visited, "", ans);

        return ans;
    }

    void solve(int r, int c, int[][] maze,
               boolean[][] visited, String path,
               ArrayList<String> ans) {
        int n = maze.length;

        if (r == n - 1 && c == n - 1) {
            ans.add(path);
            return;
        }

        visited[r][c] = true;

        int[] dr = {1, 0, 0, -1};
        int[] dc = {0, -1, 1, 0};
        char[] dir = {'D', 'L', 'R', 'U'};

        for (int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr >= 0 && nr < n && nc >= 0 && nc < n &&
                maze[nr][nc] == 1 && !visited[nr][nc]) {
                solve(nr, nc, maze, visited,
                      path + dir[i], ans);
            }
        }

        visited[r][c] = false;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1)