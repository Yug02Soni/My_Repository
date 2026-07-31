// Demo of Array of Objects in C++

#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    const int SIZE = 3; // Size of the array of objects
    Student students[SIZE]; // Array of Student objects

    // Input: Getting values for each student in the array
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter name for student " << (i + 1) << ": ";
        getline(cin, students[i].name); // Using getline to read a string with spaces
        cout << "Enter age for student " << (i + 1) << ": ";
        cin >> students[i].age;
        cin.ignore(); // Clear the input buffer after reading age
    }

    // Output: Displaying information of each student
    cout << "\nStudent Information:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        students[i].display();
    }

    return 0;
}
