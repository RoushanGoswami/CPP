#include <iostream>
using namespace std;

class Student {
    // declare variables
    int rollNo;
    string name;
    int age;
    string course;
    float percentage;

public:
    // use the constructor
    Student() {
        this->rollNo = 0;
        this->name = "";
        this->age = 0;
        this->course = "";
        this->percentage = 0;
    }

    // accept user input
    void acceptData() {
        cout << "Enter student roll number: ";
        cin >> this->rollNo;

        cout << "Enter student name: ";
        cin >> this->name;

        cout << "Enter student age: ";
        cin >> this->age;

        cout << "Enter course name: ";
        cin >> this->course;

        cout << "Enter percentage: ";
        cin >> this->percentage;
    }

    // print all data
    void printData() {
        cout << "\nRoll Number: " << this->rollNo << endl;
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Course: " << this->course << endl;
        cout << "Percentage: " << this->percentage << "%" << endl;
    }
};

int main() {
    Student s1;

    s1.acceptData();
    s1.printData();

    return 0;
};
