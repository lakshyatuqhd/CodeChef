import java.util.*;

class Solution {
    public List<Integer> findSubstring(String s, String[] words) {
        List<Integer> result = new ArrayList<>();
        if (s == null || s.length() == 0 || words == null || words.length == 0) {
            return result;
        }
        
        int wordLen = words[0].length();
        int numWords = words.length;
        int totalLen = wordLen * numWords;
        int sLen = s.length();
        
        if (sLen < totalLen) {
            return result;
        }
        
        // Build frequency map for words
        Map<String, Integer> wordMap = new HashMap<>();
        for (String word : words) {
            wordMap.put(word, wordMap.getOrDefault(word, 0) + 1);
        }
        
        // Loop through each offset from 0 to wordLen - 1
        for (int i = 0; i < wordLen; i++) {
            int left = i, right = i;
            Map<String, Integer> seenMap = new HashMap<>();
            int count = 0; // Number of valid words in the current window
            
            while (right + wordLen <= sLen) {
                String sub = s.substring(right, right + wordLen);
                right += wordLen;
                
                if (wordMap.containsKey(sub)) {
                    seenMap.put(sub, seenMap.getOrDefault(sub, 0) + 1);
                    count++;
                    
                    // If word frequency exceeds allowed count, shrink window from left
                    while (seenMap.get(sub) > wordMap.get(sub)) {
                        String leftSub = s.substring(left, left + wordLen);
                        seenMap.put(leftSub, seenMap.get(leftSub) - 1);
                        count--;
                        left += wordLen;
                    }
                    
                    // If we matched all words, record the starting index
                    if (count == numWords) {
                        result.add(left);
                        // Shift left by one word to look for the next window
                        String leftSub = s.substring(left, left + wordLen);
                        seenMap.put(leftSub, seenMap.get(leftSub) - 1);
                        count--;
                        left += wordLen;
                    }
                } else {
                    // Not a valid word, reset the window
                    seenMap.clear();
                    count = 0;
                    left = right;
                }
            }
        }
        
        return result;
    }
}