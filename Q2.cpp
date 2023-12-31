// Write a program to calculate the power of a number using a loop.


#include <iostream>
using namespace std;

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0; 
    } else if (exponent < 0) {
        return 1.0 / (base * power(base, -exponent - 1));
    } else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    double base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = power(base, exponent);

    cout << base << " raised to the power " << exponent << " is: " << result << endl;

    return 0;
}
