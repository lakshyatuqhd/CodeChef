
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        for (int t = 0; t < T; t++) {
            int NA = in.nextInt(), NB = in.nextInt(), NC = in.nextInt();
            int[] A = new int[NA];
            int[] B = new int[NB];
            int[] C = new int[NC];
            for (int i = 0; i < NA; i++) {
                A[i] = in.nextInt();
            }
            for (int i = 0; i < NB; i++) {
                B[i] = in.nextInt();
            }
            for (int i = 0; i < NC; i++) {
                C[i] = in.nextInt();
            }
            int i = 0, j = 0, k = 0;
            int ans = Integer.MAX_VALUE;
            while (i < NA && j < NB && k < NC) {
                int minVal = Math.min(A[i], Math.min(B[j], C[k]));
                int maxVal = Math.max(A[i], Math.max(B[j], C[k]));
                ans = Math.min(ans, maxVal - minVal);
                if (minVal == A[i]) {
                    i++;
                } else if (minVal == B[j]) {
                    j++;
                } else {
                    k++;
                }
            }
            System.out.println(ans);
        }
        in.close();
    }
}
