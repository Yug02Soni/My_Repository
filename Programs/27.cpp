// Write a c++ program to make a simple calculator using switch case.

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num1, num2, res;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
        case '+':
            res = num1 + num2;
            cout << "Result: " << res;
            break;
        case '-':
            res = num1 - num2;
            cout << "Result: " << res;
            break;
        case '*':
            res = num1 * num2;
            cout << "Result: " << res;
            break;
        case '/':
            if (num2 != 0) {
                res = num1 / num2;
                cout << "Result: " << res;
            } else {
                cout << "Error: Division by zero is not allowed.";
            }
            break;
        default:
            cout << "Invalid operator!";
    }

    return 0;
}
