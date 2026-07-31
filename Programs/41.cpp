// Class and Object demo 2.

#include <iostream>

using namespace std;

class Rectangle
{
public:
    double length;
    double width;

    double area()
    {
        return length * width;
    }
};

int main()
{
    Rectangle rect; // Creating an object of the Rectangle class

    // Input: Getting values for the object's attributes
    cout << "Enter length: ";
    cin >> rect.length;
    cout << "Enter width: ";
    cin >> rect.width;

    // Output: Displaying the area of the rectangle
    cout << "Area of the rectangle: " << rect.area() << endl;

    return 0;
}
