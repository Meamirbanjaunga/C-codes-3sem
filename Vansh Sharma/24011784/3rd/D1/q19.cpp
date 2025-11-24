#include <iostream>
using namespace std;

class Student {
public:
    int age, marks; string name, enrollno;
    void display() { cout << "Student: " << name << " " << age << endl; }
};

class Faculty {
public:
    int age, experience, salary;
    string facultyName, facultyCode, deptt, gender;
    void display() { cout << "Faculty: " << facultyName << " " << age << endl; }
};

class Person : public Student, public Faculty {
public:
    void show() {
        Student::display();
        Faculty::display();
    }
};
int main() {
    Person p;
    p.Student::name = "Alice";
    p.Student::age = 20;
    p.Faculty::facultyName = "Dr. Smith";
    p.Faculty::age = 45;

    p.show();

    return 0;
}