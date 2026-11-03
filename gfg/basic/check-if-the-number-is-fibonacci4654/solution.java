class Solution {
    public boolean isFibonacci(int n) {
        if (n < 0) {
            return false;
        }
        long x1 = 5L * n * n + 4;
        long x2 = 5L * n * n - 4;

        return isPerfectSquare(x1) || isPerfectSquare(x2);
    }

    private boolean isPerfectSquare(long x) {
        if (x < 0) {
            return false;
        }
        long s = (long) Math.sqrt(x);
        return s * s == x;
    }
}