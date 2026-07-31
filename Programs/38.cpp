// Write a program to store 10 number given by user in array and print the number using for loop.

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numbers[10]; // Array to store 10 numbers

    // Input: Storing numbers in the array
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }

    // Output: Printing the numbers using for loop
    cout << "The numbers you entered are:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}