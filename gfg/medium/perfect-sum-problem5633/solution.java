class Solution {
    static int perfectSum(int[] arr, int target) {
        int[] dp = new int[target + 1];
        dp[0] = 1;

        for (int x : arr) {
            for (int s = target; s >= x; s--) {
                dp[s] += dp[s - x];
            }
        }

        return dp[target];
    }
}