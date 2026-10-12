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
