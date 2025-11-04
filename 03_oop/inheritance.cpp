#include <iostream>
using namespace std;

class Vehicle
{
public:
    string brand;
    void honk()
    {
        cout << "Beep beep!" << endl;
    }
};

class Car : public Vehicle
{
public:
    string model;
    void display()
    {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
};

int main()
{
    Car myCar;
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.honk();
    myCar.display();

    return 0;
}