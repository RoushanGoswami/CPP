#include <iostream>
using namespace std;

class Converter {
    // declare variables
    float inches;
    float feet;

public:
    // use the constructor
    Converter(float inches) {
        this->inches = inches;
    }

    // main logic
    void convertInches() {
        this->feet = this->inches / 12;
    }

    
    void printResult() {
        cout << "Inches: " << this->inches << endl;
        cout << "Feet: " << this->feet << endl;
    }
};

int main() {
    float inches;

    cout << "Enter inches: ";
    cin >> inches;

    Converter c1(inches);

    c1.convertInches();
    c1.printResult();

    return 0;
};
