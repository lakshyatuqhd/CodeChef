import java.util.*;

class Solution {
    public int minPlatform(int arr[], int dep[]) {
        Arrays.sort(arr);
        Arrays.sort(dep);

        int i = 1, j = 0;
        int platforms = 1, max = 1;
        int n = arr.length;

        while (i < n && j < n) {
            if (arr[i] <= dep[j]) {
                platforms++;
                i++;
            } else {
                platforms--;
                j++;
            }

            max = Math.max(max, platforms);
        }

        return max;
    }
}