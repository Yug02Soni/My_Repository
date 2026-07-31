#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int i;
    int cout = 0;
    cout << "Enter an number";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n / i == 0)
        {
            cout ++;
        }
        
    }
    
    return 0;
}
