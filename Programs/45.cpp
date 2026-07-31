// Very Very Hard Access Modifiers demo.

#include <iostream>

using namespace std;

class MyClass
{

public:
    void publicMethod()
    {
        cout << "This is a public method." << endl;
    }

private:
    void privateMethod()
    {
        cout << "This is a private method." << endl;
    }

protected:
    void protectedMethod()
    {
        cout << "This is a protected method." << endl;
    }
};

int main()
{
    MyClass obj; // Creating an object of MyClass

    obj.publicMethod(); // Accessing public method

    // The following lines will cause compilation errors because private and protected methods cannot be accessed from outside the class
    // obj.privateMethod(); // Uncommenting this line will cause an error
    // obj.protectedMethod(); // Uncommenting this line will cause an error

    return 0;
}
