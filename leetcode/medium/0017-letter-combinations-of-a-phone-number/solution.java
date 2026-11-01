import java.util.ArrayList;
import java.util.List;

class Solution {
    // Mapping of digits to telephone letters
    private static final String[] MAPPINGS = {
        "",     // 0
        "",     // 1
        "abc",  // 2
        "def",  // 3
        "ghi",  // 4
        "jkl",  // 5
        "mno",  // 6
        "pqrs", // 7
        "tuv",  // 8
        "wxyz"  // 9
    };

    public List<String> letterCombinations(String digits) {
        List<String> result = new ArrayList<>();
        if (digits == null || digits.length() == 0) {
            return result;
        }
        
        backtrack(result, new StringBuilder(), digits, 0);
        return result;
    }

    private void backtrack(List<String> result, StringBuilder current, String digits, int index) {
        // Base case: if our current combination has reached the length of digits
        if (index == digits.length()) {
            result.add(current.toString());
            return;
        }

        // Get the letters corresponding to the current digit
        char digitChar = digits.charAt(index);
        String letters = MAPPINGS[digitChar - '0'];

        // Iterate through each letter, append it, and recurse for the next digit
        for (int i = 0; i < letters.length(); i++) {
            current.append(letters.charAt(i));
            backtrack(result, current, digits, index + 1);
            current.deleteCharAt(current.length() - 1); // Backtrack
        }
    }
}