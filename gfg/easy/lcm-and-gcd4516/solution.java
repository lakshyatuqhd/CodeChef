class Solution {
    public int[] lcmAndGcd(int a, int b) {
        int gcdVal = gcd(a, b);
        int lcmVal = (a / gcdVal) * b;
        return new int[]{lcmVal, gcdVal};
    }

    private int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}