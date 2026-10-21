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

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
