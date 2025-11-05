#include <iostream>
#include <vector>
using namespace std;

int main()
{
    auto x = 42;              // x is of type int
    auto y = 3.14;            // y is of type double
    auto z = "Hello, World!"; // z is of type const char*

    vector<int> vec = {1, 2, 3, 4, 5};
    for (auto n : vec)
    {
        cout << n << " "; // prints each element in vec
    }
    cout << endl;

    int *p = nullptr; // p is a null pointer of type int*
    if (p == nullptr)
    {
        cout << "p is a null pointer" << endl;
    }
    return 0;
}