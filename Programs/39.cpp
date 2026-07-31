// Write a program of Structure in C++ (demo).

#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string name;
    int age;
};

int main(int argc, char const *argv[])
{
    Person person1; // Creating an instance of the structure

    // Input: Getting values for the structure members
    cout << "Enter name: ";
    getline(cin, person1.name); // Using getline to read a string with spaces
    cout << "Enter age: ";
    cin >> person1.age;

    // Output: Displaying the values of the structure members
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;

    return 0;
}