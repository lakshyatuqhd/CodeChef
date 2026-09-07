import java.util.InputMismatchException;

class Codechef {
    public static void main(String[] args) {

        try {
            int numerator = 1;
            int denominator = 0;

            if (denominator == 0) {
                throw new ArithmeticException("Division by zero");
            }
            System.out.println("Result: " + numerator/denominator);

        } catch (ArithmeticException ae) {
            System.out.println("Error: Division by zero is not allowed.");
        } catch (InputMismatchException ime) {
            System.out.println("Error: Please enter valid integer values.");
        } catch (Exception e) {
            System.out.println("An unexpected error occurred: " + e.getMessage());
        } finally {
            // finally block
        }
    }
}
