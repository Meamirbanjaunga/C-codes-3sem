#include <iostream>
#include <fstream> 
#include <string>   
struct Student {
    int rollNumber;
    char name[50];
    double marks;
};
void displayStudent(const Student& s) {
    std::cout << "\n--- Record Found ---" << std::endl;
    std::cout << "Roll Number: " << s.rollNumber << std::endl;
    std::cout << "Name: " << s.name << std::endl;
    std::cout << "Marks: " << s.marks << std::endl;
}
int main() {
    std::ofstream outFile("students.dat", std::ios::out | std::ios::binary);
    if (!outFile) {
        std::cerr << "Error: Could not open file for writing." << std::endl;
        return 1;
    }
    std::cout << "Writing initial records to 'students.dat'..." << std::endl;
    Student s1 = {2419106, "Vansh", 88.5};
    Student s2 = {102, "Anya", 92.0};
    Student s3 = {103, "Rohan", 76.5};
    outFile.write(reinterpret_cast<const char*>(&s1), sizeof(Student));
    outFile.write(reinterpret_cast<const char*>(&s2), sizeof(Student));
    outFile.write(reinterpret_cast<const char*>(&s3), sizeof(Student));
    outFile.close(); 
    int searchRollNumber;
    std::cout << "\nEnter the Roll Number to retrieve: ";
    std::cin >> searchRollNumber;
    std::ifstream inFile("students.dat", std::ios::in | std::ios::binary);
    if (!inFile) {
        std::cerr << "Error: Could not open file for reading." << std::endl;
        return 1;
    }
    Student tempStudent; 
    bool recordFound = false;
    while (inFile.read(reinterpret_cast<char*>(&tempStudent), sizeof(Student))) {
        if (tempStudent.rollNumber == searchRollNumber) {
            displayStudent(tempStudent);
            recordFound = true;
            break; 
        }
    }
    inFile.close(); 
    if (!recordFound) {
        std::cout << "\nRecord for Roll Number " << searchRollNumber << " not found." << std::endl;
    }

    return 0;
}