// Very Very Impossible Nested Class demo.

#include <iostream>

using namespace std;

class Outer
{
public:
    class Inner
    {
    public:
        void display()
        {
            cout << "This is the Inner class inside the Outer class." << endl;
        }
    };

    void show()
    {
        cout << "This is the Outer class." << endl;
    }
};

int main()
{
    Outer outer; // Creating an object of the Outer class
    Outer::Inner inner; // Creating an object of the Inner class

    outer.show(); // Calling method of the Outer class
    inner.display(); // Calling method of the Inner class

    return 0;
}
