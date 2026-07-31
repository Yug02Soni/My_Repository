// Class and Object demo.

#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;

    void displayInfo()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main()
{
    Car car1; // Creating an object of the Car class

    // Input: Getting values for the object's attributes
    cout << "Enter brand: ";
    getline(cin, car1.brand); // Using getline to read a string with spaces
    cout << "Enter model: ";
    getline(cin, car1.model);
    cout << "Enter year: ";
    cin >> car1.year;

    // Output: Displaying the object's information
    cout << "\nCar Information:" << endl;
    car1.displayInfo();

    return 0;
}
