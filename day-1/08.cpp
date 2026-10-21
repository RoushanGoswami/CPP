#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, maximum, minimum;

    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    maximum = a;
    minimum = a;

    if (b > maximum) maximum = b;
    if (c > maximum) maximum = c;
    if (d > maximum) maximum = d;
    if (b < minimum) minimum = b;
    if (c < minimum) minimum = c;
    if (d < minimum) minimum = d;

    cout << "Maximum = " << maximum << endl;
    cout << "Minimum = " << minimum << endl;
    return 0;
}
