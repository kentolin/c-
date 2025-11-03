#include <iostream>
using namespace std;

int main()
{
    cout << "For Loop:" << endl;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Iteration " << i << endl;
    }

    cout << "\nWhile Loop:" << endl;
    int j = 1;
    while (j <= 5)
    {
        cout << "Iteration " << j << endl;
        j++;
    }
    cout << "\nDo-While Loop:" << endl;
    int k = 1;
    do
    {
        cout << "Iteration " << k << endl;
        k++;
    } while (k <= 5);

    return 0;
}