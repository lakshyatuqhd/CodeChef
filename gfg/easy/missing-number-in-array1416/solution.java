class Solution {
    int missingNum(int arr[]) {
        int n = arr.length + 1;
        long sum = (long) n * (n + 1) / 2;

        for (int x : arr) {
            sum -= x;
        }

        return (int) sum;
    }
}