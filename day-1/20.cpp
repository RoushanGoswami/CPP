#include <iostream>
using namespace std;

int main() {
    int first[100], second[100], merged[200];
    int n, m;

    cout << "Enter size of first array (1 to 100): ";
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "Array size must be from 1 to 100." << endl;
        return 0;
    }

    cout << "Enter first array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> first[i];
    }

    cout << "Enter size of second array (1 to 100): ";
    cin >> m;
    if (m < 1 || m > 100) {
        cout << "Array size must be from 1 to 100." << endl;
        return 0;
    }

    cout << "Enter second array elements: ";
    for (int i = 0; i < m; i++) {
        cin >> second[i];
    }

    for (int i = 0; i < n; i++) {
        merged[i] = first[i];
    }
    for (int i = 0; i < m; i++) {
        merged[n + i] = second[i];
    }

    cout << "Merged array: ";
    for (int i = 0; i < n + m; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
