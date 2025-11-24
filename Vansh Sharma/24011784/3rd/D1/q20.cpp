#include <iostream>
#include <string>
class Person {
public:
    std::string name;

    Person(std::string n = "N/A") : name(n) {
        std::cout << "Person constructor called." << std::endl;
    }
};
class Student : public Person {
public:
    std::string major;

    Student(std::string m = "Undecided") : major(m) {}
};
class Employee : public Person {
public:
    int salary;

    Employee(int s = 0) : salary(s) {}
};
class GraduateTeachingAssistant : public Student, public Employee {
public:
    GraduateTeachingAssistant(std::string n, std::string m, int s) {
        Student::name = n;
        Employee::name = n;
    }
    void display() {
        std::cout << "Name (via Student): " << Student::name << std::endl;
        std::cout << "Major: " << major << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main() {
    std::cout << "--- Demonstrating the Problem ---" << std::endl;
    GraduateTeachingAssistant gta("Sarthak Badoni", "Computer Science", 40000);
    gta.display();
    return 0;
}