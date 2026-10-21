#include <iostream>
using namespace std;

int main() {
    int numbers[100];
    int n;
    long long sum = 0;

    cout << "Enter number of elements (1 to 100): ";
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "Array size must be from 1 to 100." << endl;
        return 0;
    }

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        sum = sum + numbers[i];
    }

    double average = static_cast<double>(sum) / n;
    cout << "Average = " << average << endl;
    return 0;
}
