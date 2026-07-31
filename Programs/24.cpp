/* Write a program to find out lcm of a array of 5 numbers */

#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int arr[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int result = arr[0];
    for (int i = 1; i < 5; i++) {
        result = lcm(result, arr[i]);
    }

    cout << "LCM of the array is: " << result << endl;

    return 0;
}
