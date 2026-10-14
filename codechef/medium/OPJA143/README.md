# OPJA143

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Coding Problem

You are tasked with creating a simple calculator program in Java that can perform addition between two numbers. Create a class called Calculator with the following functionality:

- Calculator Class: Implement a constructor to initialize data. add(Calculator other): Adds the values of the two Calculator objects and returns the result as a new Calculator object.
- Main Function: Perform addition using the add method and display the result.
### Task

Write the methods of calculator class to display the addition.

### Input Format

First line contain two integers for addition using add method.

### Output Format

Print the result of addition on first line.

### Sample 1:
Input
Output

```
1 2
```

```
3
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-14T06:59:09.468Z  

```java
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

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA143)