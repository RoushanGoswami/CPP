#include <iostream>
using namespace std;

long long sumToN(int n) {
    long long sum = 0;
    for (long long i = 1; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}

int main() {
    int n;

    cout << "Enter N: ";
    cin >> n;

    if (n < 0) {
        cout << "Enter zero or a positive number." << endl;
    } else {
        cout << "Sum = " << sumToN(n) << endl;
    }

    return 0;
}
