#include <iostream>
using namespace std;

constexpr int square(int x)
{
    return x * x;
}

int main()
{
    constexpr int val = 5;
    constexpr int result = square(val); // Computed at compile-time

    cout << "The square of " << val << " is " << result << endl;

    int runtimeVal;
    cout << "Enter a number: ";
    cin >> runtimeVal;
    cout << "The square of " << runtimeVal << " is " << square(runtimeVal) << endl; // Computed at runtime

    return 0;
}