// If a user enter 1 in while loop then exit it otherwise print "You are in while loop \n Press 1 to Exit from Loop".

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    while (true)
    {
        cout << "You are in while loop \n Press 1 to Exit from Loop: ";
        cin >> number;

        if (number == 1)
        {
            cout << "Exiting the loop. Goodbye!" << endl;
            break;
        }
    }
    return 0;
}
