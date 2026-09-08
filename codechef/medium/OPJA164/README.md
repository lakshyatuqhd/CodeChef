# OPJA164

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Handling Division by Zero Exception

Write a Java program that should handle division by zero exceptions and display an appropriate error message to the user. Additionally, you should use multiple catch clauses to handle different types of exceptions that might occur during the program's execution.

Given numerator as 1 and denominator as 0, your program should:

- Attempt to perform the division of the first integer by the second integer.
- Handle the following exceptions: ArithmeticException if a division by zero occurs. InputMismatchException if the user enters non-integer values. Exception for any other unexpected exceptions that might occur.
- Display an error message for each specific exception type.
- If the division is successful, display the result.
### Task

Run the code to demonstrate how to handle the exceptions and display the error messages as described in the problem statement.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-07T10:26:10.386Z  

```java
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

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA164)