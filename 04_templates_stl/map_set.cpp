#include <iostream>
#include <map>
#include <set>
using namespace std;

int main()
{
    // Creating a map to store student names and their corresponding grades
    map<string, int> studentGrades;

    // Adding elements to the map
    studentGrades["Alice"] = 90;
    studentGrades["Bob"] = 85;
    studentGrades["Charlie"] = 92;

    // Accessing elements using keys
    cout << "Alice's grade: " << studentGrades["Alice"] << endl;
    cout << "Bob's grade: " << studentGrades["Bob"] << endl;

    // Iterating through the map
    cout << "All student grades:" << endl;
    for (const auto &pair : studentGrades)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Creating a set to store unique course names
    set<string> courses;

    // Adding elements to the set
    courses.insert("Mathematics");
    courses.insert("Physics");
    courses.insert("Chemistry");
    courses.insert("Mathematics"); // Duplicate, will not be added

    // Iterating through the set
    cout << "Courses offered:" << endl;
    for (const auto &course : courses)
    {
        cout << course << endl;
    }

    return 0;
}