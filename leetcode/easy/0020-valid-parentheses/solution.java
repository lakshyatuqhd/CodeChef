import java.util.Stack;

class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();
        
        for (char c : s.toCharArray()) {
            // Push the corresponding closing bracket onto the stack for every open bracket encountered
            if (c == '(') {
                stack.push(')');
            } else if (c == '{') {
                stack.push('}');
            } else if (c == '[') {
                stack.push(']');
            } else {
                // If it's a closing bracket, check if the stack is empty or if the top doesn't match
                if (stack.isEmpty() || stack.pop() != c) {
                    return false;
                }
            }
        }
        
        // If the stack is empty, all opening brackets were correctly closed
        return stack.isEmpty();
    }
}