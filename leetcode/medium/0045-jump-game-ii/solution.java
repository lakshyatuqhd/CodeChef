class Solution {
    public int jump(int[] nums) {
        if (nums == null || nums.length <= 1) {
            return 0;
        }
        
        int jumps = 0;
        int currentEnd = 0;
        int farthest = 0;
        
        // Traverse up to n - 2 because we don't need to jump from the last index
        for (int i = 0; i < nums.length - 1; i++) {
            farthest = Math.max(farthest, i + nums[i]);
            
            // If we have reached the end of the current jump range, take another jump
            if (i == currentEnd) {
                jumps++;
                currentEnd = farthest;
                
                // Early exit if currentEnd already reaches or surpasses the last index
                if (currentEnd >= nums.length - 1) {
                    break;
                }
            }
        }
        
        return jumps;
    }
}