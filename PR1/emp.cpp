#include <iostream>
using namespace std;

class Employee {
    // declare variables
    int employeeId;
    string name;
    string department;
    int age;
    float salary;

public:
    // use the constructor
    Employee() {
        this->employeeId = 0;
        this->name = "";
        this->department = "";
        this->age = 0;
        this->salary = 0;
    }

    // accept user input
    void acceptData() {
        cout << "Enter employee ID: ";
        cin >> this->employeeId;

        cout << "Enter employee name: ";
        cin >> this->name;

        cout << "Enter department: ";
        cin >> this->department;

        cout << "Enter employee age: ";
        cin >> this->age;

        cout << "Enter employee salary: ";
        cin >> this->salary;
    }

    // print all data
    void printData() {
        cout << "\nEmployee ID: " << this->employeeId << endl;
        cout << "Name: " << this->name << endl;
        cout << "Department: " << this->department << endl;
        cout << "Age: " << this->age << endl;
        cout << "Salary: " << this->salary << endl;
    }
};

int main() {
    Employee e1;

    e1.acceptData();
    e1.printData();

    return 0;
};
