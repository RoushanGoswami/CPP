#include <iostream>
using namespace std;

int main() {
    int numbers[100];
    int n;

    cout << "Enter number of elements (1 to 100): ";
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "Array size must be from 1 to 100." << endl;
        return 0;
    }

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int maximum = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] > maximum) {
            maximum = numbers[i];
        }
    }

    cout << "Maximum = " << maximum << endl;
    return 0;
}
