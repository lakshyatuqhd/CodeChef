class Solution {
    int floorSqrt(int n) {
        if (n == 0 || n == 1) {
            return n;
        }

        long low = 1, high = n, ans = 1;

        while (low <= high) {
            long mid = low + (high - low) / 2;

            if (mid * mid == n) {
                return (int) mid;
            } else if (mid * mid < n) {
                ans = mid; // Store the current valid floor value
                low = mid + 1; // Try to find a larger integer whose square is <= n
            } else {
                high = mid - 1; // Look in the lower half
            }
        }

        return (int) ans;
    }
}