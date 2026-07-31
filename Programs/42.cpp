// Very - Very Hard Class and Object demo.

#include <iostream>

using namespace std;

class Complex
{

public:
    double real;
    double imag;

    Complex operator+(const Complex &other)
    {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2;

    // Input: Getting values for the complex numbers
    cout << "Enter real and imaginary parts of first complex number (c1): ";
    cin >> c1.real >> c1.imag;
    cout << "Enter real and imaginary parts of second complex number (c2): ";
    cin >> c2.real >> c2.imag;

    // Adding the two complex numbers
    Complex sum = c1 + c2;

    // Output: Displaying the result
    cout << "Sum of the two complex numbers: ";
    sum.display();

    return 0;
}
