#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<int> data = {1, 2, 3, 4, 5};
    sort(data.begin(), data.end(), greater<int>());
    cout << "Sorted in descending order: ";
    for (const auto &num : data)
    {
        cout << num << " ";
    }
    cout << endl;

    reverse(data.begin(), data.end());
    cout << "Reversed data: ";
    for (const auto &num : data)
    {
        cout << num << " ";
    }
    cout << endl;

    int sum = accumulate(data.begin(), data.end(), 0);
    cout << "Sum of elements: " << sum << endl;

    auto it = find(data.begin(), data.end(), 3);
    if (it != data.end())
    {
        cout << "Element 3 found in the data." << endl;
    }
    else
    {
        cout << "Element 3 not found in the data." << endl;
    }

    return 0;
}