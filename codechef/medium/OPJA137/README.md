# OPJA137

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Returning Object from Non-static function

In Java, we use the return statement to return the created object from the function. Make sure the function's return type matches the class type you're returning.

Here's an example demonstrating how to return an object from a function:

- Properties: real (double): Represents the real part of the complex number. imaginary (double): Represents the imaginary part of the complex number.
- Methods: Complex(double real, double imaginary): A constructor that initializes the real and imaginary parts of the complex number. Complex add(Complex other): A method that takes another Complex object as input, performs complex number addition, and returns a new Complex object as the result.
- In the main function: Create two instances of the Complex class, representing two complex numbers. Use the add method to add the two complex numbers and store the result in a third Complex object. Display the result of the addition.
### Task

Execute this code to see how objects can be returned in Java.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-14T06:57:42.930Z  

```java
class Complex {
    public double real;
    public double imaginary;

    public Complex(double r, double i) {
        real = r;
        imaginary = i;
    }

    public Complex add(Complex other) {
        double resultReal = real + other.real;
        double resultImaginary = imaginary + other.imaginary;
        return new Complex(resultReal, resultImaginary);
    }
}

class Codechef {
    public static void main(String[] args) {
        Complex num1 = new Complex(2.5, 3.0);
        Complex num2 = new Complex(1.0, -1.5);

        Complex result = num1.add(num2);

        System.out.println("Result: " + result.real + " + " + result.imaginary + "i");
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA137)