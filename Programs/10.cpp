#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num, temp, sum, i = 1, n = 0;
    cout << "Enter a number ";
    cin >> num;
    sum = 0;
    i = num;
    while (num > 0)
    {
        n = num % 10;
        num = num / 10;
        sum = sum + (n * n * n);
    }
    if (sum == i)
    {
        cout << "\n"
             << i << "is an armstrong number";
    }
    else
    {
        cout << "\n"
             << i << "is not an armstrong number";
    }

    return 0;
}
