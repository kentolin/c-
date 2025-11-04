#include <iostream>
using namespace std;

void greet();

int main()
{
    cout << "Before greeting function call." << endl;
    greet();
    cout << "After greeting function call." << endl;
    return 0;
}

void greet()
{
    cout << "Hello from a function!" << endl;
}