
#include <iostream>
using namespace std;

class Student
{
    int roll;
    static int count;

public:
    Student(int r)
    {
        roll = r;
        count++;
    }

    void display()
    {
        cout << "Roll Number: " << roll << endl;
    }

    static void showCount()
    {
        cout << "Total Students: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1(101), s2(102), s3(103);

    s1.display();
    s2.display();
    s3.display();

    Student::showCount();

    return 0;
}
