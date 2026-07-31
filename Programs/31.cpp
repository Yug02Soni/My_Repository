// Enter any no 1 to 5 and print the number print by user using switch case.

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    cout << "Enter a number (1-5): ";
    cin >> number;

    switch (number)
    {
    case 1:
        cout << "You entered: 1" << endl;
        break;
    case 2:
        cout << "You entered: 2" << endl;
        break;
    case 3:
        cout << "You entered: 3" << endl;
        break;
    case 4:
        cout << "You entered: 4" << endl;
        break;
    case 5:
        cout << "You entered: 5" << endl;
        break;
    default:
        cout << "Invalid input! Please enter a number between 1 and 5." << endl;
        break;
    }

    return 0;
}
