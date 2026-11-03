class Solution {
    public static boolean checkPangram(String s) {
        boolean[] mark = new boolean[26];
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c >= 'A' && c <= 'Z') {
                mark[c - 'A'] = true;
            } else if (c >= 'a' && c <= 'z') {
                mark[c - 'a'] = true;
            }
        }
        for (boolean b : mark) {
            if (!b) return false;
        }
        return true;
    }
}