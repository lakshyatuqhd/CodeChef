# SESO04

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Linear Search in string

Given a string and a character as input, print the first position of the character in the string if it is present. If the character does not exist in the string, print " **-1** ".

### Input Format
- The first line contains a string.
- The second line contains a single character.
### Output Format
- Print the first position (0-based index) of the character in the string if it is present.
- Print "-1" if the character is not present in the string.
### Sample 1:
Input
Output

```
HelloHowYouDoing
w
```

```
7
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-04T07:31:19.337Z  

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the input string
        String inputString = scanner.next();
        
        // Read the character to search for
        char searchChar = scanner.next().charAt(0);
        
        // Initialize a variable to store the position of the character
        int position = -1;
        
        // Use a for loop to search for the character in the string
        for (int i = 0; i < inputString.length(); ++i) {
            if (inputString.charAt(i) == searchChar) {
                position = i;
                break;
            }
        }
        
        if (position != -1) {
            System.out.println(position);
        } else {
            System.out.println("-1");
        }
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SESO04)