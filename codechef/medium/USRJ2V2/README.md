# USRJ2V2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Calculator

Listen

Complete the given program to create a simple calculator that performs addition and subtraction.

- Declare 2 integer variables a and b
- Initialize the variables a and b with two user inputs.
- Declare an integer variable sum - and assign the value of addition of a and b to it.
- Declare another integer variable diff - and assign the value of subtraction of a and b to it.
- Output sum and diff to the console on separate lines with the same message as given in sample output.
### Sample 1:
Input
Output

```
35
23
```

```
Sum is: 58
Difference is: 12
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-04T15:15:02.304Z  

```java
import java.util.Scanner;

class Codechef
{
	public static void main (String[] args)
	{
		Scanner read = new Scanner(System.in);
        int a = read.nextInt();
        int b = read.nextInt();
		int sum = a + b;
		int diff = a - b;
		System.out.println("Sum is: " + sum);
		System.out.println("Difference is: " + diff);
	}
}
```

---

[View on CodeChef](https://www.codechef.com/problems/USRJ2V2)