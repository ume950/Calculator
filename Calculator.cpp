#include <iostream>
#include <cmath>

using namespace std;

double squareRoot(double x) {
    return sqrt(x);
}

double factorial(int x) {
    if (x == 0)
        return 1;
    else
        return x * factorial(x - 1);
}

double naturalLog(double x) {
    return log(x);
}

double power(double x, double b) {
    return pow(x, b);
}

int main() {
    int choice;
    double num, base;
    
    cout << "Scientific Calculator Menu:" << endl;
    cout << "1. Square Root" << endl;
    cout << "2. Factorial" << endl;
    cout << "3. Natural Logarithm" << endl;
    cout << "4. Power" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "Enter the number: ";
            cin >> num;
            cout << "Square Root of " << num << " = " << squareRoot(num) << endl;
            break;
        case 2:
            cout << "Enter the number: ";
            cin >> num;
            if (num < 0)
                cout << "Factorial of a negative number is undefined." << endl;
            else
                cout << "Factorial of " << num << " = " << factorial((int)num) << endl;
            break;
        case 3:
            cout << "Enter the number: ";
            cin >> num;
            if (num <= 0)
                cout << "Natural Logarithm is undefined for non-positive numbers." << endl;
            else
                cout << "Natural Logarithm of " << num << " = " << naturalLog(num) << endl;
            break;
        case 4:
            cout << "Enter the base: ";
            cin >> base;
            cout << "Enter the exponent: ";
            cin >> num;
            cout << base << " raised to the power " << num << " = " << power(base, num) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}

