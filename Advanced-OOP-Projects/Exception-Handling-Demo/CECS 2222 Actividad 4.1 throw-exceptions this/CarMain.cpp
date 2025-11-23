#include <iostream>
#include "Car.h"
using namespace::std;
void modelValid(int);
void speedValid(int);

int main() {
	Car car1;
	int yearModel;
	string make;
	int speed;
	bool again;

	cout << "Enter the year model of the car: ";
	cin >> yearModel;
	again = true;
	while (again)
	{
		try
		{
			modelValid(yearModel);
			car1.setYearModel(yearModel);
			again = false;
		}
		catch (string exceptionString)
		{
			cout << exceptionString;
			cout << "Enter the year model of the car: ";
			cin >> yearModel;
		}
	}
	cout << "Enter the make of the car: ";
	cin >> make;
	car1.setMake(make);
	cout << "Enter the initial speed of the car (miles per hour): ";
	cin >> speed;
	again = true;
	while (again)
	{
		try
		{
			speedValid(speed);
			car1.setSpeed(speed);
			again = false;
			
		}
		catch (string exceptionString)
		{
			cout << exceptionString;
			cout << "Enter the initial speed of the car (miles per hour): ";
			cin >> speed;
		}
	}
	car1.display();
	cout << "Initial speed: ";
	cout << car1.getSpeed() << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Accelerating... ";
		car1.accelerate();
		cout << "Current speed (miles per hour): ";
		cout << car1.getSpeed();
		cout << endl;
	}
	for (int i = 0; i < 5; i++) {
		cout << "Braking... ";
		car1.brake();
		cout << "Current speed (miles per hour): ";
		cout << car1.getSpeed();
		cout << endl;
	}
	return 0;
}
void modelValid(int aYearModel) {
	if (aYearModel < 1980 || aYearModel > 2020) {
		string exceptionString = "ERROR: The car model can not be less than 1980 or more than 2020.\n";
		throw exceptionString;
	} //end if
}
void speedValid(int aSpeed) {
	if (aSpeed < 0) {
		string exceptionString = "ERROR: The initial speed cannot be less than 0.\n";
		throw exceptionString;
	} //end if
}
/*Enter the year model of the car: 1900
ERROR: The car model can not be less than 1980 or more than 2020.
Enter the year model of the car: 2008
Enter the make of the car: Toyota
Enter the initial speed of the car (miles per hour): -1
ERROR: The initial speed cannot be less than 0.
Enter the initial speed of the car (miles per hour): 5
The 2008 Toyota is at a speed of 5 miles per hour.
Initial speed: 5
Accelerating... Current speed (miles per hour): 10
Accelerating... Current speed (miles per hour): 15
Accelerating... Current speed (miles per hour): 20
Accelerating... Current speed (miles per hour): 25
Accelerating... Current speed (miles per hour): 30
Braking... Current speed (miles per hour): 25
Braking... Current speed (miles per hour): 20
Braking... Current speed (miles per hour): 15
Braking... Current speed (miles per hour): 10
Braking... Current speed (miles per hour): 5

DESTROYING OBJECT
Press any key to continue . . .*/