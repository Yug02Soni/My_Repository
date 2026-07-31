#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter value of X and y";
    cin >> a >> b;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "SWAPPED : " << a << "  " << b;
    return 0;
}
