import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Solution {
    public List<List<Integer>> permuteUnique(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(nums); // Sort to group duplicates together
        backtrack(result, new ArrayList<>(), nums, new boolean[nums.length]);
        return result;
    }
    
    private void backtrack(List<List<Integer>> result, List<Integer> tempList, int[] nums, boolean[] used) {
        // Base case: if the temporary list matches the size of nums, we found a unique permutation
        if (tempList.size() == nums.length) {
            result.add(new ArrayList<>(tempList));
            return;
        }
        
        for (int i = 0; i < nums.length; i++) {
            // If already used, skip
            if (used[i]) {
                continue;
            }
            
            // Skip duplicates: if current element equals the previous one, 
            // and the previous one was not used in this branch, skip it.
            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) {
                continue;
            }
            
            used[i] = true;
            tempList.add(nums[i]);              // Choose
            backtrack(result, tempList, nums, used); // Explore
            tempList.remove(tempList.size() - 1); // Unchoose (Backtrack)
            used[i] = false;
        }
    }
}