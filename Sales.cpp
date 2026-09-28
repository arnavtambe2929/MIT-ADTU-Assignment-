#include <iostream>
#include <string>

using namespace std;

class Product {
    int productId;
    string productName;
    double pricePerUnit;
    int monthlySales[12]; // Fixed-size array for 12 months

public:
    // Method to accept data from the user
    void acceptDetails() {
        cout << "Enter Product ID: ";
        cin >> productId;
        cout << "Enter Product Name: ";
        cin >> productName;
        cout << "Enter Price Per Unit: ";
        cin >> pricePerUnit;
        
        cout << "Enter sales for 12 months: \n";
        for(int i = 0; i < 12; i++) {
            cout << "Month " << (i + 1) << ": ";
            cin >> monthlySales[i];
        }
        cout << "------------------------------------\n";
    }

    // Method to calculate total quantity sold
    int getTotalQuantity() {
        int totalQty = 0;
        for (int i = 0; i < 12; i++) {
            totalQty += monthlySales[i];
        }
        return totalQty;
    }

    // Method to calculate total bill
    double getTotalBill() {
        return getTotalQuantity() * pricePerUnit;
    }

    // Method to display product details
    void displayDetails() {
        cout << "Product ID   : " << productId << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Price/Unit   : Rs. " << pricePerUnit << endl;
        
        cout << "Monthly Sales: ";
        for (int i = 0; i < 12; i++) {
            cout << monthlySales[i] << " ";
        }
        cout << endl;
        
        cout << "Total Sold   : " << getTotalQuantity() << endl;
        cout << "Total Bill   : Rs. " << getTotalBill() << endl;
        cout << "----------------------------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of products: ";
    cin >> n;

    // Creating an array of product objects based on user input
    Product products[100]; // Static array with a safe upper limit

    // Accepting details for all products
    for(int i = 0; i < n; i++) {
        cout << "\n--- Enter Details for Product " << (i + 1) << " ---\n";
        products[i].acceptDetails();
    }

    // Displaying report
    cout << "\n========== PRODUCT BILLING REPORT ==========\n\n";
    for(int i = 0; i < n; i++) {
        products[i].displayDetails();
    }

    return 0;
}