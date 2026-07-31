#include<iostream>

using namespace std;

int main()
{
    int a, b = 0, i, j;
    cout << "Enter a number to convert in fahrenheit : ";
    cin >> a;
    b = (a * 9 / 5) + 32;
    cout << "The temperature in fahrenheit is: " << b << endl;
    
    return 0;
}