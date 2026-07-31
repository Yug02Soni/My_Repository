#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int pow, num, i = 1;
    long int sum = 1;
    cout << "Enter a number ";
    cin >> num;
    cout << "Enter the power ";
    cin >> pow;
    while (i <= pow)
    {
        sum = sum * num;
        i++;
    }
    cout << endl
         << num << "To the power" << pow << "is" << sum;

    return 0;
}
 