class Solution {
    public int kthElement(int a[], int b[], int k) {
        int i = 0, j = 0, count = 0, ans = 0;

        while (i < a.length && j < b.length) {
            if (a[i] < b[j])
                ans = a[i++];
            else
                ans = b[j++];

            count++;
            if (count == k)
                return ans;
        }

        while (i < a.length) {
            ans = a[i++];
            count++;
            if (count == k)
                return ans;
        }

        while (j < b.length) {
            ans = b[j++];
            count++;
            if (count == k)
                return ans;
        }

        return -1;
    }
}