// Write a program as an example of 2 Namespaces.

#include <iostream>

using namespace std;

namespace MyNamespace
{
    void displayMessage()
    {
        cout << "Hello from MyNamespace!" << endl;
    }
}

namespace AnotherNamespace
{
    void displayMessage()
    {
        cout << "Hello from AnotherNamespace!" << endl;
    }
}

int main(int argc, char const *argv[])
{
    MyNamespace::displayMessage();
    AnotherNamespace::displayMessage();
    return 0;
}