# OPJA165

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Temperature Conversion with Exception Handling

You are tasked with developing a program that converts temperatures between Celsius and Fahrenheit scales. Write a Java program that accomplishes the following tasks:

- Check if the input temperature is below absolute zero (-273.15°C) and, if so, throw an exception with the message "Temperature below absolute zero is not valid."
- Convert the Celsius temperature to Fahrenheit using the following formula: Fahrenheit = (Celsius * 9 / 5) + 32.
- Display the input temperature in Celsius and the converted temperature in Fahrenheit.

Your program should handle the following scenarios:

- If the input temperature is valid, it should display both the Celsius and Fahrenheit temperatures.
- If the input temperature is below absolute zero, it should catch and handle the exception and display an "Invalid Argument" message with the provided error message.
- If any other unexpected error occurs during execution, it should catch and handle the exception and display an "An unknown error occurred" message.
### Task

Run the code and predict which of the following catch block executes.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-07T10:27:00.842Z  

```java
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

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA165)