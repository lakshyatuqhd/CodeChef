# OPJA142

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Student and Course Information

You are tasked with creating a program to manage student and course information using Java classes. Implement a Student class with a nested Course class, allowing users to store and display student details along with the course they are enrolled in.

- Student Class: name (string): Represents the name of the student. course (Course): A nested class object representing the course in which the student is enrolled. Implement a constructor to initialize the student's name and the course name. Implement a display method within the Student class to display the student's name and the course name.
- Course Class: courseName (string): Represents the name of the course. Implement a setData method within the Course class to set the course name. Implement a display method within the Course class to display the course name.
- Main Function: In the main function, read the student's name and the course name as input. Create a Student object with the provided student name and course name. Use the display method of the Student object to display the student's name and the course name.
### Task

Complete the main function to to manage student and course information.

### Input Format

First line contain two strings, representing name and course respectively.

### Output Format

Use display method of Student to see the output.

### Sample 1:
Input
Output

```
Alice Programming

```

```
Alice
Programming

```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-12T06:41:24.153Z  

```java
import java.util.Scanner;

class Student {
    public class Course {
        public String courseName;

        public void setData(String _courseName) {
            courseName = _courseName;
        }

        public void display() {
            System.out.println(courseName);
        }
    }

    private String name;
    private Course course;

    public Student(String _name, String _courseName) {
        name = _name;
        course = new Course();
        course.setData(_courseName);
    }

    public void display() {
        System.out.println(name);
        course.display();
    }
}

class Codechef {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Take inputs
        String studentName = scanner.next();
        String courseName = scanner.next();

        // Create a student and a course
        Student student = new Student(studentName, courseName);

        // Display student's name and course name
        student.display();

        scanner.close();
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA142)