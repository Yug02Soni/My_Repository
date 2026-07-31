#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num, res;
    float PI = 3.14;
    cout << "Enter radius of the circle";
    cin >> num;
    float cir = 2 * PI * num;
    cout << "Circumference of the circle is " << cir;
    return 0;
}
