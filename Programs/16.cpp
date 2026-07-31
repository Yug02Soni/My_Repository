#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, d = 0;
    cout << "Enter a number";
    cin >> a;
    while (a > 0)
    {
        b = a % 10;
        d = d * 10 + b;
        a = a / 10;
    }
    cout << "Reversed number is: " << d << endl;
    return 0;
}
