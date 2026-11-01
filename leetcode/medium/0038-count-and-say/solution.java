class Solution {
    public String countAndSay(int n) {
        if (n <= 0) {
            return "";
        }
        
        String result = "1";
        
        // Build the sequence up to n iteratively
        for (int i = 2; i <= n; i++) {
            StringBuilder sb = new StringBuilder();
            int len = result.length();
            int count = 1;
            
            for (int j = 1; j < len; j++) {
                if (result.charAt(j) == result.charAt(j - 1)) {
                    count++;
                } else {
                    sb.append(count).append(result.charAt(j - 1));
                    count = 1; // Reset count for the new character group
                }
            }
            
            // Append the last group of characters
            sb.append(count).append(result.charAt(len - 1));
            result = sb.toString();
        }
        
        return result;
    }
}