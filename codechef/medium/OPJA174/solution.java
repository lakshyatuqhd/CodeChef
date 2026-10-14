import java.util.InputMismatchException;
import java.util.Scanner;

class Codechef {
    public static void main(String[] args) {
        try {
            Scanner scanner = new Scanner(System.in);
            int num1, num2;

            try {
                if (scanner.hasNextInt()) {
                    num1 = scanner.nextInt();
                } else {
                    // If the input is not an integer, throw an exception
                    throw new IllegalArgumentException("Invalid input.");
                }
        
                if (scanner.hasNextInt()) {
                    num2 = scanner.nextInt();
                } else {
                    // If the input is not an integer, throw an exception
                    throw new IllegalArgumentException("Invalid input.");
                }

                int result = num1 / num2;
                System.out.println("Result of division: " + result);

            } catch (IllegalArgumentException e) {
                // Handle specific exception (Invalid input)
                System.out.println(e.getMessage());
            }
        } catch (Exception e) {
            // Handle any other unknown exceptions
            System.out.println("An unknown error occurred.");
        }
    }
}
