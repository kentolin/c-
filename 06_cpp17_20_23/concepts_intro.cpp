#include <iostream>
#include <concepts>
using namespace std;

template <typename T>
    requires integral<T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "Sum of 3 and 5: " << add(3, 5) << endl;
    // The following line would cause a compilation error due to the concept constraint
    // cout << "Sum of 3.5 and 2.5: " << add(3.5, 2.5) << endl;
    return 0;
}