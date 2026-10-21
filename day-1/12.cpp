#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    cout << "Enter a number from 0 to 20: ";
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Enter a number from 0 to 20." << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    cout << "Factorial = " << factorial << endl;
    return 0;
}
