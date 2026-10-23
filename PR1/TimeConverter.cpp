
#include <iostream>
using namespace std;

class TimeConverter
{
public:
    int hours, minutes, seconds;

    void secondsToTime(int s)
    {
        hours = s / 3600;
        minutes = (s % 3600) / 60;
        seconds = s % 60;

        cout << "HH:MM:SS => ";
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    void timeToSeconds(int h, int m, int s)
    {
        seconds = (h * 3600) + (m * 60) + s;

        cout << "Total seconds: " << seconds << endl;
    }
};

int main()
{
    TimeConverter t;
    int choice, totalSeconds;

    cout << "1. Seconds to HH:MM:SS" << endl;
    cout << "2. HH:MM:SS to Seconds" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter total seconds: ";
        cin >> totalSeconds;

        t.secondsToTime(totalSeconds);
    }
    else if (choice == 2)
    {
        int h, m, s;

        cout << "Enter hours: ";
        cin >> h;

        cout << "Enter minutes: ";
        cin >> m;

        cout << "Enter seconds: ";
        cin >> s;

        t.timeToSeconds(h, m, s);
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
