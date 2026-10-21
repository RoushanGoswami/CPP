#include <iostream>
using namespace std;

int main() {
    int number, original, sum = 0;

    cout << "Enter a three-digit number: ";
    cin >> number;

    if (number < 100 || number > 999) {
        cout << "Please enter a three-digit number." << endl;
        return 0;
    }

    original = number;
    while (number > 0) {
        int digit = number % 10;
        sum = sum + digit * digit * digit;
        number = number / 10;
    }

    if (sum == original) {
        cout << "Armstrong number" << endl;
    } else {
        cout << "Not an Armstrong number" << endl;
    }

    return 0;
}
