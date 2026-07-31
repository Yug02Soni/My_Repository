// Write a program as an example of Refrence Variable.

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int originalValue = 10; // Original variable
    int &referenceVariable = originalValue; // Reference variable

    cout << "Original Value: " << originalValue << endl; // Output: 10
    cout << "Reference Variable: " << referenceVariable << endl; // Output: 10

    // Modifying the reference variable will also modify the original variable
    referenceVariable = 20;

    cout << "After modifying reference variable:" << endl;
    cout << "Original Value: " << originalValue << endl; // Output: 20
    cout << "Reference Variable: " << referenceVariable << endl; // Output: 20

    return 0;
}
