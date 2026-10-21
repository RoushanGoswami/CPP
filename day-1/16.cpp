#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number <= 0) {
        cout << "Enter a positive number." << endl;
        return 0;
    }

    while (number > 9) {
        int sum = 0;
        while (number > 0) {
            sum = sum + number % 10;
            number = number / 10;
        }
        number = sum;
    }

    if (number == 1) {
        cout << "Magic number" << endl;
    } else {
        cout << "Not a magic number" << endl;
    }

    return 0;
}
