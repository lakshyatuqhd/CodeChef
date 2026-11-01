import java.util.HashSet;
import java.util.Set;

class Solution {
    public boolean isValidSudoku(char[][] board) {
        Set<String> seen = new HashSet<>();
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char current = board[i][j];
                
                // Skip empty cells
                if (current == '.') {
                    continue;
                }
                
                // Construct unique identifiers for row, column, and 3x3 sub-box
                String rowKey = "row" + i + current;
                String colKey = "col" + j + current;
                String boxKey = "box" + (i / 3) * 3 + (j / 3) + current;
                
                // If any of these already exist in the set, the board is invalid
                if (!seen.add(rowKey) || !seen.add(colKey) || !seen.add(boxKey)) {
                    return false;
                }
            }
        }
        
        return true;
    }
}