#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

double areaofCircle(double radius)
{
    const double pi = 3.14159;
    return pi * radius * radius;
}

int main()
{
    int num1 = 5;
    int num2 = 10;
    double radius = 7.0;

    int sum = add(num1, num2);
    double area = areaofCircle(radius);

    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    cout << "The area of a circle with radius " << radius << " is: " << area << endl;

    return 0;
}