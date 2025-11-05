#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Creating a vector of integers
    vector<int> numbers;

    // Adding elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Accessing elements using indexing
    cout << "First element: " << numbers[0] << endl;
    cout << "Second element: " << numbers[1] << endl;

    // Iterating through the vector using a range-based for loop
    cout << "All elements in the vector: ";
    for (const int &num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // Getting the size of the vector
    cout << "Size of the vector: " << numbers.size() << endl;

    // Removing the last element
    numbers.pop_back();
    cout << "Size after pop_back: " << numbers.size() << endl;

    return 0;
}