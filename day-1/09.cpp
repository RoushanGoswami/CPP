#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter N: ";
    cin >> n;

    if (n < 1) {
        cout << "Enter a positive number." << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
