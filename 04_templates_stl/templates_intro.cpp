#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}
template <typename T>
class Box
{
    T value;

public:
    Box(T v) : value(v) {}
    T getValue() const { return value; }
};

int main()
{
    // Using the add function template
    int intSum = add<int>(5, 10);
    double doubleSum = add<double>(5.5, 10.2);

    cout << "Integer Sum: " << intSum << endl;
    cout << "Double Sum: " << doubleSum << endl;

    // Using the Box class template
    Box<int> intBox(123);
    Box<string> strBox("Hello, Templates!");

    cout << "Integer Box Value: " << intBox.getValue() << endl;
    cout << "String Box Value: " << strBox.getValue() << endl;

    return 0;
}