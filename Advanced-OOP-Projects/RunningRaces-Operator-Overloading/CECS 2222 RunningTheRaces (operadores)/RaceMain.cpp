
//File RaceMain.cpp
#include <iostream>
#include <iomanip>
#include "Race.h"

using namespace std;
int main() {
	const int RUNNERS = 3;
	Race runners[RUNNERS];
	string name;
	int hours;
	int minutes;
	int seconds;

	cout << "Enter the first runner's info " << endl;
	cout << "----------------------------- " << endl;
	cin >> runners[0];

	cout << "Enter the second runner's info " << endl;
	cout << "----------------------------- " << endl;
	cin >> runners[1];

	cout << "Enter the third runner's info " << endl;
	cout << "----------------------------- " << endl;
	cin >> runners[2];

	cout << "\t\nResults of the race!\n\n";
	if (runners[0] < runners[1] && runners[1] < runners[2]) {
		cout << "First Place: " << runners[0];
		cout << "Second Place: " << runners[1];
		cout << "Third Place: " << runners[2];
	}
	if (runners[0] < runners[2] && runners[2] < runners[1])
	{
		cout << "First Place: " << runners[0];
		cout << "Second Place: " << runners[2];
		cout << "Third Place: " << runners[1];
	}
	if (runners[1] < runners[0] && runners[0] < runners[2]) {
		cout << "First Place: " << runners[1];
		cout << "Second Place: " << runners[0];
		cout << "Third Place: " << runners[2];
	}
	if(runners[1] < runners[2] && runners[2] < runners[0]){
		cout << "First Place: " << runners[1];
		cout << "Second Place: " << runners[2];
		cout << "Third Place: " << runners[0];
	}
	if (runners[2] < runners[0] && runners[0] < runners[1]) {
		cout << "First Place: " << runners[2];
		cout << "Second Place: " << runners[0];
		cout << "Third Place: " << runners[1];
	}
	if (runners[2] < runners[1] && runners[1] < runners[0]) {
		cout << "First Place: " << runners[2];
		cout << "Second Place: " << runners[1];
		cout << "Third Place: " << runners[0];
	}  
    system("pause");
    return 0;
}
/*Enter the first runner's info
-----------------------------
Enter name: Anthony
Enter the time it took the runner to finish (H:MM:SS).
Enter hour: -1
Invalid hours. It cannot be less than 0!
Enter hour: -1
Invalid hours. It cannot be less than 0!
Enter hour: 0
Enter minute: -1
Invalid minutes. It cannot be less than 0!
Enter minute: 10
Enter seconds: -20
Invalid seconds. It cannot be less than 0!
Enter seconds: 20
Enter the second runner's info
-----------------------------
Enter name: Joshua
Enter the time it took the runner to finish (H:MM:SS).
Enter hour: 0
Enter minute: 15
Enter seconds: 24
Enter the third runner's info
-----------------------------
Enter name: Andrew
Enter the time it took the runner to finish (H:MM:SS).
Enter hour: 0
Enter minute: 12
Enter seconds: 23

Results of the race!

First Place: Anthony
Second Place: Andrew
Third Place: Joshua
Press any key to continue . . .*/