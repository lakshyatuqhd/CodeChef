import java.util.InputMismatchException;

class Codechef {
    public static void main(String[] args) {
        double celsius = -300.0; // Pre-defined temperature

        try {
            if (celsius < -273.15) {
                throw new IllegalArgumentException("Temperature below absolute zero is not valid.");
            }

            double fahrenheit = (celsius * 9 / 5) + 32;

            System.out.println("Temperature in Celsius: " + celsius);
            System.out.println("Temperature in Fahrenheit: " + fahrenheit);
        } catch (IllegalArgumentException e) {
            System.out.println("Invalid Argument: " + e.getMessage());
        } catch (InputMismatchException e) {
            System.out.println("Out of Range: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("An unknown error occurred.");
        }
    }
}
