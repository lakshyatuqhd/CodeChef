class Solution {
    public ArrayList<Integer> frequencyCount(int[] arr) {
        int n = arr.length;
        int[] freq = new int[n + 1];

        for (int x : arr)
            freq[x]++;

        ArrayList<Integer> ans = new ArrayList<>();

        for (int i = 1; i <= n; i++)
            ans.add(freq[i]);

        return ans;
    }
}