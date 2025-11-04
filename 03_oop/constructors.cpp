#include <iostream>
using namespace std;

class Car
{
    string brand;
    int year;

public:
    Car(string b, int y)
    {
        brand = b;
        year = y;
    }

    void display()
    {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};
int main()
{
    Car car1("Toyota", 2020);
    car1.display();

    Car car2("Honda", 2018);
    car2.display();

    return 0;
}