#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 3;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;
    cout << "a == b: " << (a == b ? "true" : "false") << endl;
    cout << "a != b: " << (a != b ? "true" : "false") << endl;
    cout << "a < b: " << (a < b ? "true" : "false") << endl;
    cout << "a > b: " << (a > b ? "true" : "false") << endl;
    cout << "a <= b: " << (a <= b ? "true" : "false") << endl;
    cout << "a >= b: " << (a >= b ? "true" : "false") << endl;
    cout << "Logical AND (a > 5 && b < 5): " << ((a > 5 && b < 5) ? "true" : "false") << endl;
    cout << "Logical OR (a < 5 || b < 5): " << ((a < 5 || b < 5) ? "true" : "false") << endl;
    cout << "Logical NOT !(a == b): " << (!(a == b) ? "true" : "false") << endl;
    return 0;
}