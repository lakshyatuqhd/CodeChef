import java.util.*;

class Solution {
    public static ArrayList<Integer> findUnion(int a[], int b[]) {
        ArrayList<Integer> res = new ArrayList<>();
        int i = 0, j = 0;

        while (i < a.length && j < b.length) {
            int x;

            if (a[i] < b[j])
                x = a[i++];
            else if (a[i] > b[j])
                x = b[j++];
            else {
                x = a[i];
                i++;
                j++;
            }

            if (res.isEmpty() || res.get(res.size() - 1) != x)
                res.add(x);
        }

        while (i < a.length) {
            if (res.isEmpty() || res.get(res.size() - 1) != a[i])
                res.add(a[i]);
            i++;
        }

        while (j < b.length) {
            if (res.isEmpty() || res.get(res.size() - 1) != b[j])
                res.add(b[j]);
            j++;
        }

        return res;
    }
}