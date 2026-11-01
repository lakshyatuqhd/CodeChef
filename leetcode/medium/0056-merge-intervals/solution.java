import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Solution {
    public int[][] merge(int[][] intervals) {
        if (intervals == null || intervals.length <= 1) {
            return intervals;
        }
        
        // Step 1: Sort intervals based on their starting times
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));
        
        List<int[]> merged = new ArrayList<>();
        int[] currentInterval = intervals[0];
        merged.add(currentInterval);
        
        // Step 2: Iterate and merge overlapping intervals
        for (int i = 1; i < intervals.length; i++) {
            int[] nextInterval = intervals[i];
            
            // Check for overlap
            if (currentInterval[1] >= nextInterval[0]) {
                currentInterval[1] = Math.max(currentInterval[1], nextInterval[1]);
            } else {
                currentInterval = nextInterval;
                merged.add(currentInterval);
            }
        }
        
        // Step 3: Convert list back to a 2D array
        return merged.toArray(new int[merged.size()][]);
    }
}