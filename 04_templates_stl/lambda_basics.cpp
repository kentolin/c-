#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {5, 2, 9, 1, 5, 6};

    sort(numbers.begin(), numbers.end(), [](int a, int b)
         {
             return a < b; // Ascending order
         });

    cout << "Sorted numbers: ";
    for (const auto &num : numbers)
    {
        cout << num << " " << endl;
    }

    cout << "Even numbers: ";
    for_each(numbers.begin(), numbers.end(), [](int n)
             {
        if (n % 2 == 0) {
            cout << n << " ";   
        } });
    cout << endl;
    return 0;
}