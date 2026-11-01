import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<List<String>> solveNQueens(int n) {
        List<List<String>> result = new ArrayList<>();
        char[][] board = new char[n][n];
        
        // Initialize board with empty cells
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                board[i][j] = '.';
            }
        }
        
        boolean[] cols = new boolean[n];
        boolean[] diag1 = new boolean[2 * n]; // Major diagonal: row - col + n
        boolean[] diag2 = new boolean[2 * n]; // Minor diagonal: row + col
        
        backtrack(result, board, 0, n, cols, diag1, diag2);
        return result;
    }
    
    private void backtrack(List<List<String>> result, char[][] board, int row, int n, 
                           boolean[] cols, boolean[] diag1, boolean[] diag2) {
        // Base case: all queens are placed
        if (row == n) {
            List<String> currentBoard = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                currentBoard.add(new String(board[i]));
            }
            result.add(currentBoard);
            return;
        }
        
        for (int col = 0; col < n; col++) {
            int d1 = row - col + n;
            int d2 = row + col;
            
            // If the column or diagonals are already occupied, skip
            if (cols[col] || diag1[d1] || diag2[d2]) {
                continue;
            }
            
            // Choose
            board[row][col] = 'Q';
            cols[col] = true;
            diag1[d1] = true;
            diag2[d2] = true;
            
            // Explore
            backtrack(result, board, row + 1, n, cols, diag1, diag2);
            
            // Unchoose (Backtrack)
            board[row][col] = '.';
            cols[col] = false;
            diag1[d1] = false;
            diag2[d2] = false;
        }
    }
}