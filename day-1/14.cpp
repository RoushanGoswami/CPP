#include <iostream>
using namespace std;

int main() {
    long long number, original, reverse = 0;

    cout << "Enter a number from 0 to 2147483647: ";
    cin >> number;

    if (number < 0 || number > 2147483647LL) {
        cout << "Enter a number in the given range." << endl;
        return 0;
    }

    original = number;
    while (number > 0) {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    if (original == reverse) {
        cout << "Palindrome number" << endl;
    } else {
        cout << "Not a palindrome number" << endl;
    }

    return 0;
}
