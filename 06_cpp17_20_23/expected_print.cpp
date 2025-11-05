#include <iostream>
#include <expected>
#include <print>
using namespace std;

expected<int, string> divide(int a, int b)
{
    if (b == 0)
    {
        return unexpected<string>("Division by zero error");
    }
    return a / b;
}

int main()
{
    auto result1 = divide(10, 2);
    if (result1)
    {
        print("Result: {}", *result1);
    }
    else
    {
        print("Error: {}", result1.error());
    }

    auto result2 = divide(10, 0);
    if (result2)
    {
        print("Result: {}", *result2);
    }
    else
    {
        print("Error: {}", result2.error());
    }

    return 0;
}