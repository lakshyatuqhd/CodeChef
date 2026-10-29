class Solution {
    public static ArrayList<ArrayList<Integer>> getPairs(int[] arr) {
        Arrays.sort(arr);
        ArrayList<ArrayList<Integer>> ans = new ArrayList<>();

        int i = 0, j = arr.length - 1;

        while (i < j) {
            int sum = arr[i] + arr[j];

            if (sum == 0) {
                ArrayList<Integer> pair = new ArrayList<>();
                pair.add(arr[i]);
                pair.add(arr[j]);
                ans.add(pair);

                int left = arr[i], right = arr[j];

                while (i < j && arr[i] == left)
                    i++;

                while (i < j && arr[j] == right)
                    j--;
            } else if (sum < 0) {
                i++;
            } else {
                j--;
            }
        }

        return ans;
    }
}