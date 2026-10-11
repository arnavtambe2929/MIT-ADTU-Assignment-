
#include <iostream>
using namespace std;

class B;

class A
{
    int x;

public:
    A(int a)
    {
        x = a;
    }

    friend void compare(A, B);
};

class B
{
    int y;

public:
    B(int b)
    {
        y = b;
    }

    friend void compare(A, B);
};

void compare(A a, B b)
{
    if (a.x > b.y)
        cout << "A is greater";
    else if (a.x < b.y)
        cout << "B is greater";
    else
        cout << "Both are equal";
}

int main()
{
    A a(50);
    B b(30);

    compare(a, b);

    return 0;
}
