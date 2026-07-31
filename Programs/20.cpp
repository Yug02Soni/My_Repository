#include <iostream>

using namespace std;

int main()
{
    int a, b = 0, i, j;
    cout << "Enter a number to convert in celsius : ";
    cin >> a;
    b = (a - 32) * 5 / 9;
    cout << "The temperature in celsius is: " << b << endl;

    return 0;
}