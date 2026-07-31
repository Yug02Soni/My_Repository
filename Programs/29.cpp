#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int button;
    cout << "Press 0 ";
    cin >> button;
    if (button == 0)
    {
        cout << "Button pressed!" << endl;
    }
    else
    {
        cout << "Button not pressed!" << endl;
    }

    return 0;
}
