# USRJ1V2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Taking user input

Listen

You have already learnt how to output values. Let's see how to take input values from users.

`Java` uses the `Scanner` class found in `java.util` package to get user input. You have to import the package to use the `Scanner` class.

In Java, the  **import**  keyword is used to bring in classes or entire packages from external libraries or modules into your current source file, allowing you to use their functionality without having to fully qualify their names every time.

```
import java.util.Scanner;

```

To use the `Scanner` class, you have to create an object of the class and use any of the methods to read `string`, numbers etc.

```
Scanner objName = new Scanner(System.in);

```

The method `nextLine()` is used to read a line of text from input and return it in `string` format. The following line will read a `string` input from user. We will also see how to read integers and other data types later on.

```
String varName = objName.nextLine();

```

 **Click on `'Submit'` in the `IDE` to run the code**.

### Sample 1:
Input
Output

```
John
```

```
John
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-04T15:13:47.430Z  

```java
import java.util.Scanner;

class Codechef
{
	public static void main (String[] args)
	{
		Scanner objName = new Scanner(System.in);
		String varName = objName.nextLine();
		System.out.println(varName);
	}
}
```

---

[View on CodeChef](https://www.codechef.com/problems/USRJ1V2)