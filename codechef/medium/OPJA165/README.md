# OPJA165

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-07T10:26:37.268Z  

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

[View on CodeChef](https://www.codechef.com/problems/OPJA165)