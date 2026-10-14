# OPJA174

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Handling Exceptional Inputs

You are tasked with creating a Java program that takes two variables as input and handles exceptions using nested try-catch blocks.

- Create a Java program that performs the following tasks: Prompt the user to enter two variables, num1 and num2. Implement a division operation: result = num1 / num2;.
- Use nested try-catch blocks to handle the following scenarios: Innermost try-catch (specific exception handling): Use an inner try-catch block to catch exceptions related to invalid input. If the user enters a non-integer value (e.g., a character), throw an exception of type IllegalArgumentException with the message "Invalid input." Outermost try-catch (general exception handling): Use an outermost try-catch block to catch any unhandled exceptions and display "An unknown error occurred.".
- Display the result of the division operation if it is successful or handle exceptions gracefully and provide meaningful error messages.
### Task

Complete the code to handles exceptions using nested try-catch blocks.

### Input Format

First line contains two variables. (int, double, etc.)

### Output Format

Complete the code to display the error message.

### Sample 1:
Input
Output

```
5 tom
```

```
Invalid input.

```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-14T06:58:14.246Z  

```java
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

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA174)