#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    int year;

    void display()
    {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main()
{
    Car car1;
    car1.brand = "Toyota";
    car1.year = 2020;
    car1.display();

    Car car2;
    car2.brand = "Honda";
    car2.year = 2018;
    car2.display();

    return 0;
}