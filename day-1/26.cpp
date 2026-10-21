#include <iostream>
using namespace std;

long long cube(int number) {
    return 1LL * number * number * number;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Cube = " << cube(number) << endl;
    return 0;
}
