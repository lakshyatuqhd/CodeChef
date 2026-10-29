import java.util.*;

class Solution {
    ArrayList<Integer> findTwoElement(int arr[]) {
        int n = arr.length;
        int[] count = new int[n + 1];
        int repeat = -1, missing = -1;

        for (int x : arr)
            count[x]++;

        for (int i = 1; i <= n; i++) {
            if (count[i] == 2)
                repeat = i;
            if (count[i] == 0)
                missing = i;
        }

        ArrayList<Integer> res = new ArrayList<>();
        res.add(repeat);
        res.add(missing);

        return res;
    }
}