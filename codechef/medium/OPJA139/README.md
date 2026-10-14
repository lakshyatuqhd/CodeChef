# OPJA139

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Object Creation and Output

Predict the output of this program.

```
class Person {
    public String name;

    public Person(String _name) {
        name = _name;
    }

    public Person createPerson(String newName) {
        return new Person(newName);
    }
}

class Codechef {
    public static void main(String[] args) {
        Person person = new Person("Alice");
        Person newPerson = person.createPerson("Bob");

        System.out.println("Original Person's Name: " + person.name);
        System.out.println("New Person's Name: " + newPerson.name);
    }
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-14T07:22:20.020Z  

```cpp
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

[View on CodeChef](https://www.codechef.com/problems/OPJA139)