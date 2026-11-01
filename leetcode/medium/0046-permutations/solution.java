import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(result, new ArrayList<>(), nums);
        return result;
    }
    
    private void backtrack(List<List<Integer>> result, List<Integer> tempList, int[] nums) {
        // Base case: if the temporary list matches the size of nums, we found a permutation
        if (tempList.size() == nums.length) {
            result.add(new ArrayList<>(tempList));
            return;
        }
        
        for (int i = 0; i < nums.length; i++) {
            // If the element is already in the permutation, skip it
            if (tempList.contains(nums[i])) {
                continue;
            }
            
            tempList.add(nums[i]);              // Choose
            backtrack(result, tempList, nums);  // Explore
            tempList.remove(tempList.size() - 1); // Unchoose (Backtrack)
        }
    }
}