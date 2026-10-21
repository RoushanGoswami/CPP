#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition = " << add(a, b) << endl;
    cout << "Subtraction = " << subtract(a, b) << endl;
    cout << "Multiplication = " << multiply(a, b) << endl;

    if (b != 0) {
        cout << "Division = " << static_cast<double>(a) / b << endl;
    } else {
        cout << "Division is not possible by zero." << endl;
    }

    return 0;
}
