#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;

    cout << "Enter N: ";
    cin >> n;

    if (n < 0) {
        cout << "Enter zero or a positive number." << endl;
        return 0;
    }

    for (long long i = 1; i <= n; i++) {
        sum = sum + i;
    }

    cout << "Sum = " << sum << endl;
    return 0;
}
