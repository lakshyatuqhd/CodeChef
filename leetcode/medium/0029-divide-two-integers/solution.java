class Solution {
    public int divide(int dividend, int divisor) {
        // Handle special overflow case
        if (dividend == Integer.MIN_VALUE && divisor == -1) {
            return Integer.MAX_VALUE;
        }
        
        // Determine the sign of the result
        boolean negative = (dividend < 0) ^ (divisor < 0);
        
        // Use long to avoid overflow when converting to absolute values
        long dvd = Math.abs((long) dividend);
        long dvs = Math.abs((long) divisor);
        
        long result = 0;
        
        while (dvd >= dvs) {
            long temp = dvs, multiple = 1;
            
            // Double the divisor and multiplier while possible
            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            
            dvd -= temp;
            result += multiple;
        }
        
        // Apply the sign
        result = negative ? -result : result;
        
        // Clamp the result to 32-bit signed integer range
        if (result > Integer.MAX_VALUE) {
            return Integer.MAX_VALUE;
        }
        if (result < Integer.MIN_VALUE) {
            return Integer.MIN_VALUE;
        }
        
        return (int) result;
    }
}