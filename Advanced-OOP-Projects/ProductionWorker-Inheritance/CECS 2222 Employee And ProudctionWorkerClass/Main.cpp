#include <iostream>
#include "TeamLeader.h"

using namespace::std;
 
int main() {
    cout << "---------------\n";
    cout << "Dominos's Pizza\n";
    cout << "---------------\n";
    TeamLeader leader1;

    cin >> leader1;
    cout << "\n\tDisplaying...\n";
    cout << leader1;

    TeamLeader leader2("Carlos Figueroa", 2, 3, 4, 2019, 1, 20.00, 300.00, 40, 34);
    cout << "\n\tDisplaying...\n";
    cout << leader2;
    system("pause");
    return 0;
}
/*---------------
Dominos's Pizza
---------------
Enter the name of the employee: Anthony
Enter the mumber of the employee: 1
Hire Date
Enter the month: 1
Enter the day: 10
Enter the year: 2001
Enter the shift (Enter 1 for day and 2 for night): 2
Enter pay rate: $30
Enter the montly bonus: $300
Enter required work hours: 55
Enter attended work hours: 40

        Displaying...

Name: Anthony
Number of Employee #1
Hire Date
January 10, 2001
Shift: Night
Pay rate: $30.00/hr
Monthly bonus: $300.00
Required Hours: 55.00
Attended Hours: 40.00

        Displaying...

Name: Carlos Figueroa
Number of Employee #2
Hire Date
March 4, 2019
Shift: Day
Pay rate: $20.00/hr
Monthly bonus: $300.00
Required Hours: 40.00
Attended Hours: 34.00
Press any key to continue . . .*/