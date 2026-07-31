// If a user enter 1 in do - while loop then exit it otherwise print "You are in do - while loop \n Press 1 to Exit from Loop"

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    do
    {
        cout << "You are in do - while loop \n Press 1 to Exit from Loop: ";
        cin >> number;

        if (number == 1)
        {
            cout << "Exiting the loop. Goodbye!" << endl;
            break;
        }
    } while (true);
    return 0;
}