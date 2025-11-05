#include <iostream>
#include <vector>
using namespace std;

vector<int> createVector()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Vector created with elements: " << endl;
    return vec; // RVO (Return Value Optimization) may apply here
}

int main()
{
    vector<int> myVector = createVector(); // Move semantics in action
    cout << "Vector received, size = " << myVector.size() << endl;
    vector<int> anotherVector = std::move(myVector); // Explicit move
    cout << "After move, anotherVector size = " << anotherVector.size() << endl;
    cout << "After move, myVector size = " << myVector.size() << endl; // myVector is in a valid but unspecified state
    return 0;
}