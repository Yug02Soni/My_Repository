#include <iostream>

using namespace std;

int sum(int a, int y);

int main(int argc, char const *argv[])
{
    int a, y;
    cout << "The sum of two numbers is: " << sum(a, y) << endl;
    return 0;
}

int sum(int a, int y)
{
    cout << "Enter two numbers: ";
    cin >> a >> y;
    return a + y;
}
