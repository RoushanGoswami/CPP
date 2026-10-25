#include <iostream>
using namespace std;

class Car {
    // declare variables
    string company;
    string model;
    string color;
    int year;
    float price;

public:
    // use the constructor
    Car() {
        this->company = "";
        this->model = "";
        this->color = "";
        this->year = 0;
        this->price = 0;
    }

    // accept user input
    void acceptData() {
        cout << "Enter car company: ";
        cin >> this->company;

        cout << "Enter car model: ";
        cin >> this->model;

        cout << "Enter car color: ";
        cin >> this->color;

        cout << "Enter manufacturing year: ";
        cin >> this->year;

        cout << "Enter car price: ";
        cin >> this->price;
    }

    // print all data
    void printData() {
        cout << "Company: " << this->company << endl;
        cout << "Model: " << this->model << endl;
        cout << "Color: " << this->color << endl;
        cout << "Year: " << this->year << endl;
        cout << "Price: " << this->price << endl;
    }
};

int main() {
    Car c1;

    c1.acceptData();
    c1.printData();

    return 0;
};

