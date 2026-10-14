# OPJA138

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Returning Object from Static function

Create a Java program that defines a simple string concatenation class.
You should create a class called `Name` with the following properties and methods:

- name (string): Represents a name that is a data member of the class.
- static Name concatenateNames(Name obj1, Name obj2): A static method that takes two parameters, both of type Name objects: obj1: Represents the first name. obj2: Represents the second name. The method returns a new Name object with the name data member set to the result of concatenating the name data members of obj1 and obj2.

In the main function:

- Create an instance of the Name class and set the name data member to "Tom".
- Create another instance of the Name class and set the name data member to "Jerry".
- Use the concatenateNames static method from the Name class to concatenate the name data members of the two Name objects.
- Display the concatenated name using the name data member of the returned Name object.
### Task

Complete this code to observe how objects can be returned from static functions.

### Sample 1:
Input
Output

```
 
```

```
Tom Jerry
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-14T07:18:58.195Z  

```java
class Name {
    public String name; // Data member to store a name

    // Static method to concatenate two Name objects and return a new Name object
    public static Name concatenateNames(Name obj1, Name obj2) {
        // Create a new Name object and set its name data member to the concatenated result
        Name result = new Name();
        result.name = obj1.name + " " + obj2.name;
        return result;
    }
}

class Codechef {
    public static void main(String[] args) {
        // Create an instance of the Name class and set the name data member
        Name name1 = new Name();
        name1.name = "Tom";

        // Create another instance of the Name class and set the name data member
        Name name2 = new Name();
        name2.name = "Jerry";

        // Use the concatenateNames static method to concatenate the names
        Name concatenatedName = Name.concatenateNames(name1, name2);

        // Display the concatenated name using the name data member of the result
        System.out.println(concatenatedName.name);
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA138)