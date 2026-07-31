#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int year;
    cout << "Enter a year";
    cin >> year;
    if (year % 4 == 0)
    {
        cout << "Yes this is a leap year";
    } else
    {
        cout << "It is not a leap year";
    }
    
    
    return 0;
}
