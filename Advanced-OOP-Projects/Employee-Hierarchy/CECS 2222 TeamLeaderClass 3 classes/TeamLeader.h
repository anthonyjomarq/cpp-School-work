#pragma once
#include "ProductionWorker.h"
class TeamLeader : public ProductionWorker{
private:
    double mnBonus;
    int hoursRequired;
    int hoursAttended;

public:
    //default constructor
    //which will in turn call ProductionWorker
    //default constructor (which, will in turn call
    //the default constructor of Employee class,
    //although this is not important for this
    //exercise since the class ProductionWorker
    //is already implemented)
    TeamLeader() : ProductionWorker()
    {
        //message added for demonstration purposes
        cout << "Default constructor of TeamLeader class";
        cout << " now running...\n";

        //initialize the member variables
        mnBonus = 0.0;
        //hours required variable is initialized to
        //the correct value of the hours that should be
        //attended, we chose 40 for demonstration
        hoursRequired = 40;
        hoursAttended = 0;
    }

    //overloaded constructor, which will in turn
    //call the overloaded constructor of
    //Production worker (which, will in turn call
    //the overloaded constructor of Employee class,
    //although this is not important for this
    //exercise since the class ProductionWorker
    //is already implemented)
    TeamLeader(string n, int num,
        int d, int m, int y,
        int sh, double p,
        double mb, int hr, int ha) :
        ProductionWorker(n, num, d, m, y, sh, p)
    {
        //message added for demonstration purposes
        cout << "Overloaded constructor of TeamLeader class";
        cout << " now running...\n";

        //relevant data are passed to overloaded
        //constructor of base class
        //now set data of inherited class

        //first check for invalid input
        if (mb < 0) {
            cout << "Monthly bonus cannot be negative";
            cout << " number!\n";
        }
        if (hr < 0) {
            cout << "Hours required cannot be negative";
            cout << " number!\n";
        }
        if (ha < 0) {
            cout << "Hours attended cannot be negative";
            cout << " number!\n";
        }

        //terminate program if so
        if (mb < 0 || hr < 0 || ha < 0) {
            cout << "Now terminating!\n";
            exit(EXIT_FAILURE);
        }

        //otherwise, set members of this class
        mnBonus = mb;
        hoursRequired = hr;
        hoursAttended = ha;
    }

    //getter functions
    double getBonus() const {
        return mnBonus;
    }

    int getHoursRequired() const {
        return hoursRequired;
    }

    int getHoursAttended() const {
        return hoursAttended;
    }

    //setter functions
    void setBonus(double mb) {
        //first validate input
        while (mb < 0) {
            cout << "Monthly bonus cannot be negative!";
            cout << " Enter again: ";
            cin >> mb;
        }

        mnBonus = mb;
    }

    void setHoursRequired(int hr) {
        //first validate input
        while (hr < 0) {
            cout << "Hours required cannot be negative!";
            cout << " Enter again: ";
            cin >> hr;
        }

        hoursRequired = hr;
    }

    void setHoursAttended(int ha) {
        //first validate input
        while (ha < 0) {
            cout << "Hours attended cannot be negative!";
            cout << " Enter again: ";
            cin >> ha;
        }

        hoursAttended = ha;
    }
};

