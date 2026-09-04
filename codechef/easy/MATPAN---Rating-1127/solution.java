import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        if (!sc.hasNextInt()) return;
        int t = sc.nextInt();

        while (t-- > 0) {
            long[] price = new long[26];
            for (int i = 0; i < 26; i++) {
                price[i] = sc.nextLong();
            }

            String s = sc.next();
            boolean[] present = new boolean[26];

            for (int i = 0; i < s.length(); i++) {
                present[s.charAt(i) - 'a'] = true;
            }

            long totalCost = 0;

            for (int i = 0; i < 26; i++) {
                if (!present[i]) {
                    totalCost += price[i];
                }
            }

            System.out.println(totalCost);
        }

        sc.close();
    }
}
