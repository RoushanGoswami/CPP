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

    for (int i = 0; i < n / 2; i++) {
        int temp = numbers[i];
        numbers[i] = numbers[n - 1 - i];
        numbers[n - 1 - i] = temp;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
