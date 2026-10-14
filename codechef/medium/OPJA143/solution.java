import java.util.Scanner;

class Calculator {
    private int result;

    // Constructor to initialize the result to zero
    public Calculator() {
        result = 0;
    }

    // Constructor to initialize the result to zero
    public void setResult(int value) {
        result = value;
    }

    // Method to get the current result
    public int getResult() {
        return result;
    }

    // Method to add two Calculator objects and return the result as a new Calculator object
    public Calculator add(Calculator other) {
        Calculator newCalc = new Calculator();
        newCalc.setResult(result + other.getResult());
        return newCalc;
    }
}


class Codechef {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Calculator calcA = new Calculator();
        Calculator calcB = new Calculator();

        int valueA = scanner.nextInt();
        int valueB = scanner.nextInt();

        calcA.setResult(valueA);
        calcB.setResult(valueB);

        Calculator resultCalc = calcA.add(calcB);

        System.out.println(resultCalc.getResult());

        scanner.close();
    }
}
