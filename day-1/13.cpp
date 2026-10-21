#include <iostream>
using namespace std;

int main() {
    int terms;
    unsigned long long first = 0, second = 1, next;

    cout << "How many terms (0 to 93)? ";
    cin >> terms;

    if (terms < 0 || terms > 93) {
        cout << "Enter a number from 0 to 93." << endl;
        return 0;
    }

    for (int i = 1; i <= terms; i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;

    return 0;
}
