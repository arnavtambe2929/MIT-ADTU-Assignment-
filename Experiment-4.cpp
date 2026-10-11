
#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;

public:
    // Default constructor
    Employee()
    {
        id = 0;
        name = "Unknown";
        salary = 0;
    }

    // Parameterized constructor
    Employee(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }

    void display()
    {
        float bonus = salary * 0.10;
        float total = salary + bonus;

        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << salary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << total << endl;
    }
};

int main()
{
    Employee e1;
    Employee e2(101, "Rahul", 20000);

    cout << "Default Employee:" << endl;
    e1.display();

    cout << "\nParameterized Employee:" << endl;
    e2.display();

    return 0;
}
