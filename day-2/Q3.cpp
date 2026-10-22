#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    string course;
    int age;
    float percentage;

    void setStudent(int r, string n, string c, int a, float p)
    {
        rollNo = r;
        name = n;
        course = c;
        age = a;
        percentage = p;
    }

    void getStudent()
    {
        cout << endl;
        cout << "Roll No - " << rollNo << endl;
        cout << "Name - " << name << endl;
        cout << "Course - " << course << endl;
        cout << "Age - " << age << endl;
        cout << "Percentage - " << percentage << endl;
    }
};

int main()
{
    Student a, b;

    a.setStudent(1, "Amit", "BSc IT", 19, 85.5);
    b.setStudent(2, "Neha", "BSc IT", 20, 90.5);

    a.getStudent();
    b.getStudent();

    return 0;
}