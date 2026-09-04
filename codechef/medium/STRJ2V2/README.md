# STRJ2V2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Concatenation

Listen

The '+' sign can be used between `strings` to add them together to make a new `String`.
This is called  **`concatenation`**.
For eg -

```
String x = "Good"; 
String y = "Work";
System.out.println(x + y);
// output will be: GoodWork

```

 **Note** : You can add spaces between words by using an empty " " with a space inside or by providing a space in the end of a word.
For eg -

```
String x = "Good"; 
String y = "Work";
System.out.println(x + " " + y);
// output will be: Good Work

```

### Task

Write a program which does the following:

- Declare two variables x and y.
- Assign the values "Hello" to variable x and "World" to variable y.
- Output x and y to the console. Don't forget to add a space in between them. Your output will be Hello World.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-04T15:17:34.888Z  

```java
class Codechef
{
	public static void main (String[] args)
	{
		String x = "Hello";
        String y = "World";
        System.out.print(x + " " + y);
	}
}
```

---

[View on CodeChef](https://www.codechef.com/problems/STRJ2V2)