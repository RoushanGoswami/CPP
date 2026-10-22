#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    int modelNo;
    string color;
    string modelName;
    string companyName;
    string type;
    bool isEV;
    float price;

    void setCar(int no, string col, string mname,
                string cname, bool ev, float amt, string typ)
    {
        modelNo = no;
        color = col;
        modelName = mname;
        companyName = cname;
        isEV = ev;
        price = amt;
        type = typ;
    }

    void getCar()
    {
        cout << endl;
        cout << "Model No - " << modelNo << endl;
        cout << "Model Name - " << modelName << endl;
        cout << "Company Name - " << companyName << endl;
        cout << "Color - " << color << endl;
        cout << "Price - " << price << endl;
        cout << "Is EV - " << isEV << endl;
        cout << "Car Type - " << type << endl;
    }
};

int main()
{
    Car a, b;

    a.setCar(123, "Red", "GLA200", "Mercedes", false, 6700000, "Sedan");
    b.setCar(485, "Black", "X6", "BMW", false, 8700000, "SUV");

    a.getCar();
    b.getCar();

    return 0;
}