#include <iostream>
using namespace std;

class Conversion
{
public:
    float inches;
    float feet;

    void setData(float i)
    {
        inches = i;
    }

    void getData()
    {
        feet = inches / 12;

        cout << "Inches - " << inches << endl;
        cout << "Feet - " << feet << endl;
    }
};

int main()
{
    Conversion a;

    a.setData(36);
    a.getData();

    return 0;
}