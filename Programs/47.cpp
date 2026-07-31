// Imposible Demo of Command Line Arguments in C++.

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Number of command line arguments: " << argc << endl;

    cout << "Command line arguments:" << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }

    return 0;
}
