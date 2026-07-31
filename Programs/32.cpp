// Write a program to find squaare of one to ten numers.

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Number\tSquare" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t" << "-" << "\t" << i * i << endl;
    }
    return 0;
}