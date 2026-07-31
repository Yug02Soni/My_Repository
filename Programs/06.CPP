#include <iostream>

using namespace std;

int main()
{
    int fn = 0, sn = 1;
    int result, user_no, count = 1;

    cout << "Enter any Number: ";
    cin >> user_no;

    while (1)
    {
        result = fn + sn;

        if (result > user_no)
        {
            break;
        }

        cout << "Fib No [" << count << "] => " << result << endl;

        fn = sn;
        sn = result;

        count++;
    }

    return 0;
}