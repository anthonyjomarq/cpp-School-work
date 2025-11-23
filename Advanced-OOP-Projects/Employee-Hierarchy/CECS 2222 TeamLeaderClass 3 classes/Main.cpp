//3. TeamLeader Class
//In a particular factory, a team leader is an hourly paid production worker who leads
//a small team.In addition to hourly pay, team leaders earn a fixed monthly bonus.
//Team leaders are required to attend a minimum number of hours of training per year.
//Design a TeamLeader class that extends the ProductionWorker class you designed in
//Programming Challenge 1. The TeamLeader class should have member variables for
//the monthly bonus amount, the required number of training hours, and the number of
//training hours that the team leader has attended.Write one or more constructors and
//the appropriate accessor and mutator functions for the class.Demonstrate the class by
//writing a program that uses a TeamLeader object.
#include <iostream>
#include <iomanip>
#include "TeamLeader.h"

using namespace std;

int main()
{
    //create default TeamLeader object
    cout << "Creating default TeamLeader object...\n";
    TeamLeader leader;
    cout << "Done! All data set to default values!\n\n";

    //format output
    cout << fixed << setprecision(2);

    //display data
    cout << "Now displaying data...\n";
    cout << "Name: " << leader.getName() << endl;
    cout << "Employee Number: " << leader.getNumber() << endl;
    cout << "Hire Date: " << leader.getHireDate() << endl;
    cout << "Working shift: " << leader.getShift() << endl;
    cout << "Pay rate: $" << leader.getPayRate() << "/hr" << endl;
    cout << "Monthly bonus: $" << leader.getBonus() << endl;
    cout << "Required Hours: " << leader.getHoursRequired() << endl;
    cout << "Attended Hours: " << leader.getHoursAttended() << endl;

    //now set the various data
    cout << "\nNow setting name to Jonathan Smith...\n";
    leader.setName("Jonathan Smith");
    cout << "Done!\n";

    cout << "\nNow setting employee number to 5555...\n";
    leader.setNumber(5555);
    cout << "Done!\n";

    cout << "\nNow setting hire date to 1/2/2005...\n";
    leader.setHireDate(1, 2, 2005);
    cout << "Done!\n";

    cout << "\nNow setting shift to Night...\n";
    leader.setShift(2);
    cout << "Done!\n";

    cout << "\nNow setting pay rate to $25.5/hr...\n";
    leader.setPayRate(25.5);
    cout << "Done!\n";

    cout << "\nNow setting monthly bonus to $250.00 ...\n";
    leader.setBonus(250.00);
    cout << "Done!\n";

    cout << "\nNow setting required hours to 25...\n";
    leader.setHoursRequired(25);
    cout << "Done!\n";

    cout << "\nNow setting attended hours to 10...\n";
    leader.setHoursAttended(10);
    cout << "Done!\n";

    //display new values
    cout << "\nNow displaying data again...\n";
    cout << "Name: " << leader.getName() << endl;
    cout << "Employee Number: " << leader.getNumber() << endl;
    cout << "Hire Date: " << leader.getHireDate() << endl;
    cout << "Working shift: " << leader.getShift() << endl;
    cout << "Pay rate: $" << leader.getPayRate() << "/hr" << endl;
    cout << "Monthly bonus: $" << leader.getBonus() << endl;
    cout << "Required Hours: " << leader.getHoursRequired() << endl;
    cout << "Attended Hours: " << leader.getHoursAttended() << endl;

    //create another TeamLeader object with some other values
    cout << "\nNow we will create another TeamLeader using";
    cout << " some other initializing values for overloaded";
    cout << " constructor...\n";
    TeamLeader leader2("Adam Bay", 9999, 1, 3, 1999,
        1, 31.99, 349.95, 50, 45);
    cout << "Done!\n";

    //display data
    cout << "\nNow displaying its data...\n";
    cout << "Name: " << leader2.getName() << endl;
    cout << "Employee Number: " << leader2.getNumber() << endl;
    cout << "Hire Date: " << leader2.getHireDate() << endl;
    cout << "Working shift: " << leader2.getShift() << endl;
    cout << "Pay rate: $" << leader2.getPayRate() << "/hr" << endl;
    cout << "Monthly bonus: $" << leader2.getBonus() << endl;
    cout << "Required Hours: " << leader2.getHoursRequired() << endl;
    cout << "Attended Hours: " << leader2.getHoursAttended() << endl;

    //return 0 to mark successful termination
    return 0;
}