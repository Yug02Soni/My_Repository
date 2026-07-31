#include <iostream>

using namespace std;

int sum(int x, int y);

int main(int argc, char const *argv[])
{
    int x, y;
    sum(x, y);
    return 0;
}

int sum(int x, int y)
{
    int res;
    cout << "Enter a number";
    cin >> x >> y;
    res = x + y;
    cout << "Sum is " << res;
    return 0;
}
