// Demo of using static member function in C++

#include <iostream>

using namespace std;

class Demo
{
private:
    /* data */
    static int count;

public:
    Demo();
    ~Demo();

    static void displayCount()
    {
        cout << "Count: " << count << endl;
    }
};

int Demo::count = 0;

Demo::Demo()
{
    count++;
}

Demo::~Demo()
{
    count--;
}

int main(int argc, char const *argv[])
{
    Demo d1, d2, d3;

    Demo::displayCount(); // Output: Count: 3

    {
        Demo d4;
        Demo::displayCount(); // Output: Count: 4
    }

    Demo::displayCount(); // Output: Count: 3

    return 0;
}
