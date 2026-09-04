# USRJ1AV2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Scanner Methods

Listen

You have already seen how to read a `String`. Let's see how to read the other `datatype` values:

- nextInt(): Reads integer values.
- nextFloat(): Reads float value.
- nextDouble(): Reads double value.
- nextBoolean(): Reads boolean value.
- nextLine(): Reads string value until newline character ('\n') is encountered.
- next(): Reads string value until space or newline character is encountered.
### Task

 **Write a program for the following** :

- Declare an integer variable num.
- Read the value from the user.
- Print it's square.
### Sample 1:
Input
Output

```
4
```

```
16
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-04T15:14:37.398Z  

```java
import java.util.Scanner;

class Codechef
{
	public static void main (String[] args)
	{
		Scanner read = new Scanner(System.in);
		int num = read.nextInt();
		System.out.println(num * num);
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/USRJ1AV2)