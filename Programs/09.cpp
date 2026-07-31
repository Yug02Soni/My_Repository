#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, i = 1, sum = 0;
    cout << "Enter a number";
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }

        i++;
    }
    if (sum == n)
    {
        cout << i << " is the perfect number";
    }
    else
    {
        cout << i << "is not a perfect number";
    }

    return 0;
}
