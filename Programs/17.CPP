#include <iostream>

using namespace std;

int main()
{
    int a, b = 0, i, j;
    cout << "Enter a number of row for floyd's triangle: ";
    cin >> a;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << b + 1 << " ";
            b++;
        }
        cout << endl;
    }
    return 0;
}