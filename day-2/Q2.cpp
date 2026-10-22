#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    string department;
    string designation;
    float salary;

    void setEmployee(int i, string n, string d, string des, float s)
    {
        id = i;
        name = n;
        department = d;
        designation = des;
        salary = s;
    }

    void getEmployee()
    {
        cout << endl;
        cout << "Employee ID - " << id << endl;
        cout << "Name - " << name << endl;
        cout << "Department - " << department << endl;
        cout << "Designation - " << designation << endl;
        cout << "Salary - " << salary << endl;
    }
};

int main()
{
    Employee a, b;

    a.setEmployee(101, "Rahul", "IT", "Developer", 25000);
    b.setEmployee(102, "Priya", "HR", "Manager", 30000);

    a.getEmployee();
    b.getEmployee();

    return 0;
}