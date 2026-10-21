#include <iostream>
using namespace std;

int main() {
    int a, b, c, maximum, minimum;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    maximum = a;
    minimum = a;

    if (b > maximum) maximum = b;
    if (c > maximum) maximum = c;
    if (b < minimum) minimum = b;
    if (c < minimum) minimum = c;

    cout << "Maximum = " << maximum << endl;
    cout << "Minimum = " << minimum << endl;
    return 0;
}
