#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int num;
    long int sq;
    int r;
    int t;
    int equal;
    cout << "Enter a number";
    cin >> r;
    num = n;
    sq = n * n;
    t = 10;
    cout << "\n Square of" << n << " is " << sq << endl;
    while (n > 0)
    {
        r = sq % t;
        if (num == r)
        {
            equal = 1;
            break;
        }
        n = n / 10;
        t = t * 10;
    }
    if (equal == 1)
    {
        cout << num << " is an aitomorphic number";
    }
    else
    {
        cout << num << " is not an authophic number";
    }
    
    return 0;
}
