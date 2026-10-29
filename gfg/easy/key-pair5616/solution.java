class Solution {
    boolean twoSum(int arr[], int target) {
        HashSet<Integer> set = new HashSet<>();

        for (int x : arr) {
            int need = target - x;

            if (set.contains(need))
                return true;

            set.add(x);
        }

        return false;
    }
}