#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    return a * b;
}
double multiply(double a, double b)
{
    return a * b;
}

int main()
{
    int int1 = 4;
    int int2 = 5;
    double double1 = 4.5;
    double double2 = 2.0;

    int intResult = multiply(int1, int2);
    double doubleResult = multiply(double1, double2);

    cout << "The product of " << int1 << " and " << int2 << " is: " << intResult << endl;
    cout << "The product of " << double1 << " and " << double2 << " is: " << doubleResult << endl;

    return 0;
}