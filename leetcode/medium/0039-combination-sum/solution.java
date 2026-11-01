import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(result, new ArrayList<>(), candidates, target, 0);
        return result;
    }
    
    private void backtrack(List<List<Integer>> result, List<Integer> tempList, int[] candidates, int remain, int start) {
        // Base cases
        if (remain < 0) {
            return;
        } else if (remain == 0) {
            result.add(new ArrayList<>(tempList));
            return;
        }
        
        // Explore choices starting from 'start'
        for (int i = start; i < candidates.length; i++) {
            tempList.add(candidates[i]);
            // Pass 'i' instead of 'i + 1' to allow reusing the same element
            backtrack(result, tempList, candidates, remain - candidates[i], i); 
            tempList.remove(tempList.size() - 1); // Backtrack
        }
    }
}