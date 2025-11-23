#pragma once
#include <string>
#include "Employee.h";
class ProductionWorker : public Employee {
private:
    int shift;
    double payRate;
public:
    //default constructor
    //will call default constructor of base class
    ProductionWorker() : Employee()
    {
        //message added for demonstration purposes
        cout << "Default constructor of ProductionWorker class";
        cout << " now running...\n";

        shift = 1;
        payRate = 0.0;
    }

    //overloaded constructor
    //will call overloaded constructor of base class
    ProductionWorker(string n, int num, int d,
        int m, int y, int sh, double p) :
        Employee(n, num, d, m, y)
    {
        //message added for demonstration purposes
        cout << "Overloaded constructor of ProductionWorker class";
        cout << " now running...\n";

        //relevant data are passed to overloaded
        //constructor of base class
        //now set data of inherited class

        //first check for invalid input
        if ((sh != 1 && sh != 2) || p < 0) {
            //print error message then exit
            cout << "Error! Invalid input for shift ";
            cout << "and/or pay rate! ";
            cout << "Now terminating!\n";
            exit(EXIT_FAILURE);
        }
        else {
            //otherwise set data
            shift = sh;
            payRate = p;
        }
    }

    //getter functions
    string getShift() const {
        //return day or night shift
        //according to value in shift member
        if (shift == 1)
            return "Day";
        return "Night";
    }

    double getPayRate() const {
        return payRate;
    }

    //setter functions
    void setShift(int sh) {
        //check for invalid input
        if (sh != 1 && sh != 2) {
            //print error message then exit
            cout << "Error! Invalid input! Shift ";
            cout << "can only be 1 or 2! Now terminating!\n";
            exit(EXIT_FAILURE);
        }
        else {
            //otherwise set shift
            shift = sh;
        }
    }

    void setPayRate(double p) {
        //check for invalid input
        if (p < 0) {
            //print error message then exit
            cout << "Error! Pay rate cannot be negative ";
            cout << "number! Now terminating!\n";
            exit(EXIT_FAILURE);
        }
        else {
            //otherwise set data
            payRate = p;
        }
    }
};
