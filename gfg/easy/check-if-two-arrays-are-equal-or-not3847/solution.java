import java.util.*;

class Solution {
    public boolean checkPermutation(int[] a, int[] b) {
        Arrays.sort(a);
        Arrays.sort(b);

        return Arrays.equals(a, b);
    }
}