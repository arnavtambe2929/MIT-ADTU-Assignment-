
#include <iostream>
using namespace std;

class Book
{
    int id;
    string title;
    float price;

public:
    // Parameterized constructor
    Book(int i, string t, float p)
    {
        id = i;
        title = t;
        price = p;
    }

    // Copy constructor
    Book(const Book &b)
    {
        id = b.id;
        title = b.title;
        price = b.price;
    }

    void display()
    {
        cout << "Book ID: " << id << endl;
        cout << "Book Title: " << title << endl;
        cout << "Book Price: " << price << endl;
    }

    // Destructor
    ~Book()
    {
        cout << "Destructor called for " << title << endl;
    }
};

int main()
{
    Book b1(101, "C++ Programming", 450);
    Book b2(b1);

    cout << "Original Book Details:" << endl;
    b1.display();

    cout << "\nCopied Book Details:" << endl;
    b2.display();

    return 0;
}
