/* // write a program to find the min / max of an array
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b = 0, i, j;
    cout << "Enter the size of an array: ";
    cin >> a;
    vector<int> arr(a);
    cout << "Enter the elements of an array: ";
    for (i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0], max = arr[0];
    for (i = 1; i < a; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "The minimum element of an array is: " << min << endl;
    cout << "The maximum element of an array is: " << max << endl;
    return 0;
} */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cout << "Enter some number to check minimum and maximum of a number";
    cin >> a >> b >> c;
    if (a < b && a < c)
    {
        cout << "The minimum number is: " << a << endl;
    }
    else if (b < a && b < c)
    {
        cout << "The minimum number is: " << b << endl;
    }
    else
    {
        cout << "The minimum number is: " << c << endl;
    }
    return 0;
}
