#include <iostream>
#include <string>

class Student {
private:
    int rollNumber;
    std::string name;
    float marks;

public:
    // Member function to accept student details
    void acceptDetails() {
        std::cout << "Enter Roll Number: ";
        std::cin >> rollNumber;
        std::cin.ignore(); // Clear newline character from the input buffer
        
        std::cout << "Enter Name: ";
        std::getline(std::cin, name);
        
        std::cout << "Enter Marks (out of 100): ";
        std::cin >> marks;
    }

    // Member function to display student details and result
    void displayDetails() {
        std::cout << "\n--- Student Details ---" << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Marks: " << marks << " / 100" << std::endl;
        
        // Calculate and display result evaluation
        if (marks >= 40.0) {
            std::cout << "Result: PASSED" << std::endl;
        } else {
            std::cout << "Result: FAILED" << std::endl;
        }
    }
};

int main() {
    Student studentObj;
    
    // Input and process student data
    studentObj.acceptDetails();
    studentObj.displayDetails();
    
    return 0;
}