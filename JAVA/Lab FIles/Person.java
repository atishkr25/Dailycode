public class Person {
    String name;
    int age; 

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void Display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }

    public static void main(String[] args) {
        Person p1 = new Person("Atish", 21);
        Person p2 = new Person("Rahul", 22);

        System.out.println("Person 1st Date: ");
        p1.Display();
        System.out.println("Person 2nd Data: ");
        p2.Display();
    }
}
