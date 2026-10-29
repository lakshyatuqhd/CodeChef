class Solution {
    static boolean isSubsetSum(int arr[], int sum) {
        boolean[] dp = new boolean[sum + 1];
        dp[0] = true;

        for (int x : arr) {
            for (int j = sum; j >= x; j--) {
                dp[j] = dp[j] || dp[j - x];
            }
        }

        return dp[sum];
    }
}