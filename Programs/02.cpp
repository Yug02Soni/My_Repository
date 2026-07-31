#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    cout << "Enter an INT";
    cin >> x;
    if (x / 2 == 0)
    {
        cout << "This is an Even Number";
    }
    else
    {
        cout << "This is an Odd Number";
    }

    return 0;
}
