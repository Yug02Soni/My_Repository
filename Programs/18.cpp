#include <iostream>

using namespace std;

int main()
{

    cout << "Enter a number to count the digit of a number: ";
    int a, b = 0;
    cin >> a;
    while (a > 0)
    {
        a = a / 10;
        b++;
    }
    cout << "The number of digit is: " << b << endl;
    return 0;
}