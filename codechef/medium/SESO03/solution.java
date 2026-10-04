import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the length of the array
        int n = scanner.nextInt();

        // Read the element to search for
        int k = scanner.nextInt();

        // Read the array elements
        int[] array = new int[n];
        for (int i = 0; i < n; ++i) {
            array[i] = scanner.nextInt();
        }
        boolean found = false;

        for (int i = 0; i < n; ++i) {
            if (array[i] == k) {
                found = true;
                break;
            }
        }
        if (found) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}
