// Static variables in C++ DEMO,

#include <iostream>

using namespace std;

class Counter
{
public:
    static int count; // Static variable to keep track of the count

    Counter()
    {
        count++; // Increment the count whenever a new object is created
    }

    static void displayCount()
    {
        cout << "Current count: " << count << endl; // Display the current count
    }
};

// Initialize the static variable

int Counter::count = 0;

int main()
{
    Counter c1; // Creating first object
    Counter::displayCount(); // Display count after creating first object

    Counter c2; // Creating second object
    Counter::displayCount(); // Display count after creating second object

    Counter c3; // Creating third object
    Counter::displayCount(); // Display count after creating third object

    return 0;
}
