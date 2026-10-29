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