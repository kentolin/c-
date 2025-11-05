#include <iostream>
#include <vector>
#include <ranges>
using namespace std;

int main()
{
    // Create a vector of integers
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Use ranges to filter even numbers and transform them by squaring
    auto evenSquares = numbers | views::filter([](int n)
                                               { return n % 2 == 0; }) |
                       views::transform([](int n)
                                        { return n * n; });

    // Print the results
    cout << "Even squares: ";
    for (int n : evenSquares)
    {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}