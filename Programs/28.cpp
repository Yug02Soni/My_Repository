// Write a program to find area of circle, rectangle and triangle and Hexagon.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int choice;
    cout << "Choose a shape to calculate area: " << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Hexagon" << endl;
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            double radius, area;
            cout << "Enter radius of the circle: ";
            cin >> radius;
            area = 3.14159 * radius * radius;
            cout << "Area of the circle: " << area << endl;
            break;
        }
        case 2:
        {
            double length, width, area;
            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
            area = length * width;
            cout << "Area of the rectangle: " << area << endl;
            break;
        }
        case 3:
        {
            double base, height, area;
            cout << "Enter base and height of the triangle: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "Area of the triangle: " << area << endl;
            break;
        }
        case 4:
        {
            double side, area;
            cout << "Enter side length of the hexagon: ";
            cin >> side;
            area = (3 * sqrt(3) * side * side) / 2;
            cout << "Area of the hexagon: " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
