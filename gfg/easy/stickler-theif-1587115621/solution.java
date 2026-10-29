class Solution {
    int findMaxSum(int arr[]) {
        int prev2 = 0, prev1 = 0;

        for (int x : arr) {
            int curr = Math.max(prev1, prev2 + x);
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
}