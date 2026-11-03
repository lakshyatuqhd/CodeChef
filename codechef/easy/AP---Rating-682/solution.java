import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (!sc.hasNextInt()) return;
        int T = sc.nextInt();
        while (T-- > 0) {
            int X = sc.nextInt();
            int Y = sc.nextInt();
            int Z = sc.nextInt();
            System.out.println(minOperations(X, Y, Z));
        }
        sc.close();
    }

    public static int minOperations(int X, int Y, int Z) {
        if (Y - X == Z - Y) {
            return 0;
        }
        return 1;
    }
}