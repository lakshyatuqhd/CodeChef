
class Solution {
    public int celebrity(int mat[][]) {
        int n = mat.length;

        for (int i = 0; i < n; i++) {
            boolean celebrity = true;

            for (int j = 0; j < n; j++) {
                if (i != j && (mat[i][j] == 1 || mat[j][i] == 0)) {
                    celebrity = false;
                    break;
                }
            }

            if (celebrity) {
                return i;
            }
        }

        return -1;
    }
}
