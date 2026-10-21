#include <iostream>
using namespace std;

long long sumToN(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + sumToN(n - 1);
}

int main() {
    int n;

    cout << "Enter N (0 to 10000): ";
    cin >> n;

    if (n < 0 || n > 10000) {
        cout << "Enter a number from 0 to 10000." << endl;
    } else {
        cout << "Sum = " << sumToN(n) << endl;
    }

    return 0;
}
