#include <iostream>
#include <string>
using namespace std;

class Train
{
private:
    int trainNumber;
    string trainName, source, destination, trainTime;
    static int trainCount;

public:
    Train()
    {
        trainNumber = 0;
        trainName = "";
        source = "";
        destination = "";
        trainTime = "";
        trainCount++;
    }

    Train(int n, string name, string s, string d, string t)
    {
        trainNumber = n;
        trainName = name;
        source = s;
        destination = d;
        trainTime = t;
        trainCount++;
    }

    ~Train()
    {
        trainCount--;
    }

    void setTrainNumber(int n)
    {
        trainNumber = n;
    }

    void setTrainName(string name)
    {
        trainName = name;
    }

    void setSource(string s)
    {
        source = s;
    }

    void setDestination(string d)
    {
        destination = d;
    }

    void setTrainTime(string t)
    {
        trainTime = t;
    }

    int getTrainNumber()
    {
        return trainNumber;
    }

    string getTrainName()
    {
        return trainName;
    }

    string getSource()
    {
        return source;
    }

    string getDestination()
    {
        return destination;
    }

    string getTrainTime()
    {
        return trainTime;
    }

    void inputTrainDetails()
    {
        cout << "Enter Train Number: ";
        cin >> trainNumber;

        cout << "Enter Train Name: ";
        cin >> ws;
        getline(cin, trainName);

        cout << "Enter Source: ";
        getline(cin, source);

        cout << "Enter Destination: ";
        getline(cin, destination);

        cout << "Enter Train Time: ";
        getline(cin, trainTime);
    }

    void displayTrainDetails()
    {
        cout << "\nTrain Number: " << trainNumber;
        cout << "\nTrain Name: " << trainName;
        cout << "\nSource: " << source;
        cout << "\nDestination: " << destination;
        cout << "\nTrain Time: " << trainTime << endl;
    }

    static int getTrainCount()
    {
        return trainCount;
    }
};

int Train::trainCount = 0;

class RailwaySystem
{
private:
    Train trains[100];
    int totalTrains;

public:
    RailwaySystem()
    {
        totalTrains = 3;

        trains[0].setTrainNumber(101);
        trains[0].setTrainName("Okha Express");
        trains[0].setSource("Surat");
        trains[0].setDestination("Mumbai");
        trains[0].setTrainTime("10 AM");

        trains[1].setTrainNumber(102);
        trains[1].setTrainName("Rajdhani Express");
        trains[1].setSource("Delhi");
        trains[1].setDestination("Mumbai");
        trains[1].setTrainTime("6 PM");

        trains[2].setTrainNumber(103);
        trains[2].setTrainName("Shatabdi Express");
        trains[2].setSource("Ahmedabad");
        trains[2].setDestination("Mumbai");
        trains[2].setTrainTime("8 AM");
    }

    void addTrain()
    {
        if (totalTrains < 100)
        {
            trains[totalTrains].inputTrainDetails();
            totalTrains++;
            cout << "\nTrain Added Successfully!\n";
        }
        else
        {
            cout << "\nTrain List is Full!\n";
        }
    }

    void displayAllTrains()
    {
        if (totalTrains == 0)
        {
            cout << "\nNo Train Records Found!\n";
        }
        else
        {
            for (int i = 0; i < totalTrains; i++)
            {
                cout << "\nTrain " << i + 1 << " Details:";
                trains[i].displayTrainDetails();
            }
        }
    }

    void searchTrainByNumber(int number)
    {
        int found = 0;

        for (int i = 0; i < totalTrains; i++)
        {
            if (trains[i].getTrainNumber() == number)
            {
                cout << "\nTrain Found!\n";
                trains[i].displayTrainDetails();
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            cout << "\nTrain Not Found!\n";
        }
    }
};

int main()
{
    RailwaySystem r;
    int choice, number;

    do
    {
        cout << "\nRAILWAY RESERVATION SYSTEM ";
        cout << "\n1. Add New Train";
        cout << "\n2. Display All Trains";
        cout << "\n3. Search Train by Number";
        cout << "\n4. Exit";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                r.addTrain();
                break;

            case 2:
                r.displayAllTrains();
                break;

            case 3:
                cout << "\nEnter Train Number: ";
                cin >> number;
                r.searchTrainByNumber(number);
                break;

            case 4:
                cout << "\nExiting the System \n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}
