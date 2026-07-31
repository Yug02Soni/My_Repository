#include <iostream>
#include<string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char a[100], b[100];
    cout << "Enter the string to check if it is a palindrom";
    cin >> a;
    strcpy(b, a);
    strrev(b);
    if (strcmp(a, b) == 0)
    {
        cout << "Entering a string is a pali ..";
    }
    else
    {
        cout << "Ented string is not a pall";
    }

    return 0;
}
