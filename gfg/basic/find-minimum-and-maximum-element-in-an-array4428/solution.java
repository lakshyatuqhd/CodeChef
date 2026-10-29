import java.util.*;

class Solution {
    public ArrayList<Integer> getMinMax(int[] arr) {
        int min = arr[0];
        int max = arr[0];

        for (int x : arr) {
            if (x < min)
                min = x;

            if (x > max)
                max = x;
        }

        ArrayList<Integer> res = new ArrayList<>();
        res.add(min);
        res.add(max);

        return res;
    }
}