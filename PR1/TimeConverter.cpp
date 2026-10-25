#include <iostream>
using namespace std;

class Timer {
    // declare variables
    int userInput;
    int seconds, minutes, hours;

public:
    // use the constructor
    Timer(int seconds) {
        this->userInput = seconds;
    }

    // main logic
    void convertTime() {
        this->minutes = this->userInput / 60;
        this->seconds = this->userInput % 60;
        this->hours = this->minutes / 60;
        this->minutes = this->minutes % 60;
    }

    // print result
    void printTime() {
        cout << "HH:MM:SS : "
             << this->hours << " : "
             << this->minutes << " : "
             << this->seconds << endl;
    }
};

int main() {
    int seconds;

    cout << "Enter total seconds: ";
    cin >> seconds;

    Timer t1(seconds);

    t1.convertTime();
    t1.printTime();

    return 0;
};
