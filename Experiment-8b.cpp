
#include <iostream>
using namespace std;

class Vehicle
{
public:
    string brand;

    void getVehicle()
    {
        cout << "Enter brand: ";
        cin >> brand;
    }
};

class Car : public Vehicle
{
public:
    string model;

    void getCar()
    {
        getVehicle();
        cout << "Enter model: ";
        cin >> model;
    }
};

class ElectricCar : public Car
{
public:
    int battery;

    void getElectricCar()
    {
        getCar();
        cout << "Enter battery capacity (kWh): ";
        cin >> battery;
    }

    void display()
    {
        cout << "\nBrand: " << brand;
        cout << "\nModel: " << model;
        cout << "\nBattery Capacity: " << battery << " kWh";
    }
};

int main()
{
    ElectricCar e;
    e.getElectricCar();
    e.display();

    return 0;
}
