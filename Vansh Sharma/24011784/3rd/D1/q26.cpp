#include <iostream>
#include <fstream> 
#include <string>   

int main() {

    std::string studentName, studentBranch;
    int studentId;
    std::string line; 
    std::cout << "Enter Student Name: ";
    std::getline(std::cin, studentName);

    std::cout << "Enter Student ID (e.g., 2419106): ";
    std::cin >> studentId;
    std::cin.ignore(1000, '\n'); 

    std::cout << "Enter Student Branch (e.g., Computer Science): ";
    std::getline(std::cin, studentBranch);
    std::ofstream outFile("student_data.txt");

    if (!outFile) {
        std::cerr << "Error: Could not open the file for writing." << std::endl;
        return 1;
    }
    outFile << studentName << std::endl;
    outFile << studentId << std::endl;
    outFile << studentBranch << std::endl;
    outFile.close();
    std::cout << "\nSuccessfully wrote data to 'student_data.txt'." << std::endl;
    std::cout << "\n--- Reading Contents from File ---" << std::endl;
    std::ifstream inFile("student_data.txt");
    if (!inFile) {
        std::cerr << "Error: Could not open the file for reading." << std::endl;
        return 1; 
    }
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }
    inFile.close();
    return 0; 
}