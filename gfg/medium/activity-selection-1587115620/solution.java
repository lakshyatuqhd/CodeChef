import java.util.*;

class Solution {
    public int activitySelection(int[] start, int[] finish) {
        int n = start.length;
        int[][] a = new int[n][2];

        for (int i = 0; i < n; i++) {
            a[i][0] = start[i];
            a[i][1] = finish[i];
        }

        Arrays.sort(a, (x, y) -> Integer.compare(x[1], y[1]));

        int count = 1;
        int lastFinish = a[0][1];

        for (int i = 1; i < n; i++) {
            if (a[i][0] > lastFinish) {
                count++;
                lastFinish = a[i][1];
            }
        }

        return count;
    }
}