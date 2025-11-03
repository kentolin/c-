#include <iostream>
using namespace std;
int main()
{
    int count = 5;
    double rate = 2.5;
    char grade = 'A';
    bool passed = true;
    string name = "Padam";

    cout << "Name: " << name << endl;
    cout << "Count: " << count << endl;
    cout << "Rate: " << rate << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << (passed ? "true" : "false") << endl;
    return 0;
}