
#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void getPerson()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class Student : public Person
{
public:
    int rollNo;
    float marks;

    void getStudent()
    {
        getPerson();
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nRoll Number: " << rollNo;
        cout << "\nMarks: " << marks;
    }
};

int main()
{
    Student s;
    s.getStudent();
    s.display();

    return 0;
}
