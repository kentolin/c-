#include <iostream>
#include <optional>
#include <variant>
using namespace std;

int main()
{
    // Using std::optional to represent an optional integer
    std::optional<int> optInt;
    if (!optInt)
    {
        cout << "optInt is empty" << endl;
    }
    optInt = 42;
    if (optInt)
    {
        cout << "optInt has value: " << *optInt << endl;
    }

    // Using std::variant to hold either an int or a string
    std::variant<int, std::string> var;
    var = 100;
    cout << "var holds int: " << std::get<int>(var) << endl;

    var = "Hello, Variant!";
    cout << "var holds string: " << std::get<std::string>(var) << endl;

    return 0;
}