#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
    int vehicleID, year;
    string manufacturer, model;

public:
    static int totalVehicles;

    Vehicle()
    {
        vehicleID = 0;
        year = 0;
        manufacturer = "";
        model = "";
    }

    ~Vehicle()
    {
    }

    void setVehicleID(int id)
    {
        vehicleID = id;
    }

    void setManufacturer(string m)
    {
        manufacturer = m;
    }

    void setModel(string m)
    {
        model = m;
    }

    void setYear(int y)
    {
        year = y;
    }

    int getVehicleID()
    {
        return vehicleID;
    }

    string getManufacturer()
    {
        return manufacturer;
    }

    string getModel()
    {
        return model;
    }

    int getYear()
    {
        return year;
    }

    void input()
    {
        cout << "Enter Vehicle ID: ";
        cin >> vehicleID;

        cout << "Enter Manufacturer: ";
        cin >> ws;
        getline(cin, manufacturer);

        cout << "Enter Model: ";
        getline(cin, model);

        cout << "Enter Year: ";
        cin >> year;
    }

    void display()
    {
        cout << "\nVehicle ID: " << vehicleID;
        cout << "\nManufacturer: " << manufacturer;
        cout << "\nModel: " << model;
        cout << "\nYear: " << year;
    }
};

int Vehicle::totalVehicles = 0;

class Car : public Vehicle
{
private:
    string fuelType;

public:
    void input()
    {
        Vehicle::input();

        cout << "Enter Fuel Type: ";
        cin >> fuelType;
    }

    void display()
    {
        Vehicle::display();

        cout << "\nFuel Type: " << fuelType;
    }
};

class ElectricCar : public Car
{
private:
    int batteryCapacity;

public:
    void input()
    {
        Car::input();

        cout << "Enter Battery Capacity: ";
        cin >> batteryCapacity;
    }

    void display()
    {
        Car::display();

        cout << "\nBattery Capacity: " << batteryCapacity;
    }
};

class Aircraft
{
protected:
    int flightRange;
};

class FlyingCar : public Car, public Aircraft
{
public:
    void input()
    {
        Car::input();

        cout << "Enter Flight Range: ";
        cin >> flightRange;
    }

    void display()
    {
        Car::display();

        cout << "\nFlight Range: " << flightRange;
    }
};

class SportsCar : public ElectricCar
{
private:
    int topSpeed;

public:
    void input()
    {
        ElectricCar::input();

        cout << "Enter Top Speed: ";
        cin >> topSpeed;
    }

    void display()
    {
        ElectricCar::display();

        cout << "\nTop Speed: " << topSpeed;
    }
};

class Sedan : public Car
{
};

class SUV : public Car
{
};

class VehicleRegistry
{
private:
    Car c[100];
    ElectricCar e[100];
    FlyingCar f[100];
    SportsCar s[100];
    Sedan sd[100];
    SUV u[100];

    int type[100], id[100];

public:
    void addVehicle()
    {
        int i = Vehicle::totalVehicles;

        if (i >= 100)
        {
            cout << "\nRegistry is Full!";
            return;
        }

        cout << "\n1. Car";
        cout << "\n2. Electric Car";
        cout << "\n3. Flying Car";
        cout << "\n4. Sports Car";
        cout << "\n5. Sedan";
        cout << "\n6. SUV";

        cout << "\nEnter Vehicle Type: ";
        cin >> type[i];

        switch (type[i])
        {
            case 1:
                c[i].input();
                id[i] = c[i].getVehicleID();
                break;

            case 2:
                e[i].input();
                id[i] = e[i].getVehicleID();
                break;

            case 3:
                f[i].input();
                id[i] = f[i].getVehicleID();
                break;

            case 4:
                s[i].input();
                id[i] = s[i].getVehicleID();
                break;

            case 5:
                sd[i].input();
                id[i] = sd[i].getVehicleID();
                break;

            case 6:
                u[i].input();
                id[i] = u[i].getVehicleID();
                break;

            default:
                cout << "\nInvalid Choice!";
                return;
        }

        for (int j = 0; j < i; j++)
        {
            if (id[j] == id[i])
            {
                cout << "\nVehicle ID Already Exists!";
                return;
            }
        }

        Vehicle::totalVehicles++;

        cout << "\nVehicle Added Successfully!";
    }

    void displayVehicle(int i)
    {
        switch (type[i])
        {
            case 1:
                cout << "\nVehicle Type: Car";
                c[i].display();
                break;

            case 2:
                cout << "\nVehicle Type: Electric Car";
                e[i].display();
                break;

            case 3:
                cout << "\nVehicle Type: Flying Car";
                f[i].display();
                break;

            case 4:
                cout << "\nVehicle Type: Sports Car";
                s[i].display();
                break;

            case 5:
                cout << "\nVehicle Type: Sedan";
                sd[i].display();
                break;

            case 6:
                cout << "\nVehicle Type: SUV";
                u[i].display();
                break;
        }

        cout << endl;
    }

    void displayAllVehicles()
    {
        if (Vehicle::totalVehicles == 0)
        {
            cout << "\nNo Vehicles Found!";
        }
        else
        {
            for (int i = 0; i < Vehicle::totalVehicles; i++)
            {
                displayVehicle(i);
            }

            cout << "\nTotal Vehicles: "
                 << Vehicle::totalVehicles;
        }
    }

    void searchVehicle(int n)
    {
        int found = 0;

        for (int i = 0; i < Vehicle::totalVehicles; i++)
        {
            if (id[i] == n)
            {
                cout << "\nVehicle Found!";
                displayVehicle(i);

                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            cout << "\nVehicle Not Found!";
        }
    }
};

int main()
{
    VehicleRegistry v;
    int choice, id;

    do
    {
        cout << "\n\nVEHICLE REGISTRY SYSTEM";
        cout << "\n1. Add Vehicle";
        cout << "\n2. Display All Vehicles";
        cout << "\n3. Search Vehicle";
        cout << "\n4. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                v.addVehicle();
                break;

            case 2:
                v.displayAllVehicles();
                break;

            case 3:
                cout << "Enter Vehicle ID: ";
                cin >> id;
                v.searchVehicle(id);
                break;

            case 4:
                cout << "\nThank You!";
                break;

            default:
                cout << "\nInvalid Choice!";
        }

    } while (choice != 4);

    return 0;
}