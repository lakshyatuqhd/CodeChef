class Solution {
    public int commDiv(int a, int b) {
        return countCommonDivisors(a, b);
    }
     public int countCommonDivisors(int a, int b) {
        int g = gcd(a, b);
        int count = 0;

        for (int i = 1; i * i <= g; i++) {
            if (g % i == 0) {
                count++;
                if (i * i != g) {
                    count++;
                }
            }
        }

        return count;
    }

    private int gcd(int x, int y) {
        while (y != 0) {
            int temp = x % y;
            x = y;
            y = temp;
        }
        return x;
    }
}