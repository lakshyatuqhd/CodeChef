class Solution {
    public boolean isMatch(String s, String p) {
        int sLen = s.length();
        int pLen = p.length();
        int sIdx = 0, pIdx = 0;
        int starIdx = -1, match = 0;
        
        while (sIdx < sLen) {
            // Case 1: Direct match or '?'
            if (pIdx < pLen && (p.charAt(pIdx) == '?' || p.charAt(pIdx) == s.charAt(sIdx))) {
                sIdx++;
                pIdx++;
            } 
            // Case 2: Encountered '*'
            else if (pIdx < pLen && p.charAt(pIdx) == '*') {
                starIdx = pIdx;
                match = sIdx;
                pIdx++;
            } 
            // Case 3: Mismatch, but we can fallback to the previous '*'
            else if (starIdx != -1) {
                pIdx = starIdx + 1;
                match++;
                sIdx = match;
            } 
            // Case 4: Mismatch and no '*' to fallback on
            else {
                return false;
            }
        }
        
        // Check for remaining characters in pattern (must be all '*')
        while (pIdx < pLen && p.charAt(pIdx) == '*') {
            pIdx++;
        }
        
        return pIdx == pLen;
    }
}