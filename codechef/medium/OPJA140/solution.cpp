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
