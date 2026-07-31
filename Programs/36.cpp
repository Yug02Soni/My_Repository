// Write a program to access a global variable using scope resolution operator.

#include <iostream>

using namespace std;

int globalVariable = 42; // Global variable

int main(int argc, char const *argv[])
{
    cout << "The value of the global variable is: " << ::globalVariable << endl; // Accessing global variable using scope resolution operator
    return 0;
}
