#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;

public:
    // Member function defined inside the class to accept dimensions
    void acceptDimensions() {
        cout << "Enter length of the rectangle: ";
        cin >> length;
        cout << "Enter breadth of the rectangle: ";
        cin >> breadth;
    }

    // Member functions declared inside, to be defined outside the class
    float calculateArea();
    float calculatePerimeter();
    void display();
};

// Defining calculateArea outside the class using the scope resolution operator (::)
float Rectangle::calculateArea() {
    return length * breadth;
}

// Defining calculatePerimeter outside the class
float Rectangle::calculatePerimeter() {
    return 2 * (length + breadth);
}

// Defining display outside the class
void Rectangle::display() {
    cout << "\n--- Rectangle Details ---\n";
    cout << "Length    : " << length << endl;
    cout << "Breadth   : " << breadth << endl;
    cout << "Area      : " << calculateArea() << endl;
    cout << "Perimeter : " << calculatePerimeter() << endl;
}

int main() {
    Rectangle rect; // Create an object of class Rectangle
    
    rect.acceptDimensions();
    rect.display();
    
    return 0;
}