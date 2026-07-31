 #include <iostream>

using namespace std;

int main()
{
    int a, b = 0, i, j;
    cout << "Enter a number to find the series: ";
    cin >> a;
    for (i = 3; i <= a; i = i + 5)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}