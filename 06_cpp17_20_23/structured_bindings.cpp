#include <iostream>
#include <tuple>
#include <map>
using namespace std;

tuple<int, string, double> getPersonInfo()
{
    return {1, "Alice", 75.5};
}

int main()
{
    // Structured bindings to unpack tuple
    auto [id, name, weight] = getPersonInfo();
    cout << "ID: " << id << ", Name: " << name << ", Weight: " << weight << endl;

    // Structured bindings with map
    map<string, int> ageMap = {{"Bob", 30}, {"Charlie", 25}};
    for (const auto &[personName, age] : ageMap)
    {
        cout << personName << " is " << age << " years old." << endl;
    }

    return 0;
}