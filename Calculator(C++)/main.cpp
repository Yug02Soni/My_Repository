#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;

    // Prompt user for the mathematical operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Prompt user for the two numeric operands
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Evaluate the operator using a switch statement
    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
            
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
            
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
            
        case '/':
            // Critical runtime check to prevent division by zero
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is undefined!" << endl;
            }
            break;
            
        // Catch-all block for unexpected or non-supported characters
        default:
            cout << "Error: Invalid operator input!" << endl;
            break;
    }

    return 0;
}
