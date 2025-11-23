/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: May 12, 2021
* Topic: Lab 8 - Team Project
* File name: lab08.cpp
* Team Members: Anthony J. Colon Dominguez, ID#108365 and Diamaris Gonzalez Rodriguez ID#: 121589
*/
#include <iostream>
#include <string>
#include "Dealership.h"
using namespace::std;

int menu(); // the menu function
bool execute(int menu(), Dealership& dealership); // where the menu option is executed
void goodBye(); // prints the goodbye message

// DO NOT ADD any other variable declarations in main
// The only allowed declaration is that of the Dealership object
int main() {
	// declare a Dealership object whose name is Poli Auto Sales
	// the variable name is NOT Poli Auto Sales
	Dealership dealership("Poli Auto Sales");
	while (execute(menu, dealership));
	return 0;
}

// the menu method returns the selected option
int menu() {
	string input = "";
	cout << "Poli Auto Sales Inventory Management Console\n";
	cout << "Select one of the following options\n";
	cout << "\t1. Add a car to inventory\n";
	cout << "\t2. Sell a car from inventory\n";
	cout << "\t3. Print the summary inventory\n";
	cout << "\t4. Print the detailed inventory\n";
	cout << "\t5. Exit the program\n";
	cout << "\nYour selection: ";
	cin >> input;
	if (isdigit(input[0])) {
		//returnValue = input[0];
		return atoi(input.c_str());
	}
	else
		return 0;
}


// the execute methods implements a switch control structure
// to process the output of the menu method
// It receives as parameters the selected option and a
// reference to the Dealership object declared in main.
// This method returns false when opton 5 is selected,
// otherwise returns true
// Make sure to include the proper default statement to catch 
// any unknown option values.
// This method will call the appropriate methods from the
// referenced object to execute the desired action.
bool execute(int menu(), Dealership& dealership) {
	string brand, model;
	bool status = true;
	while (status) {
		switch (menu()) {
		case 1:
			cout << "\nEnter the brand of the car: ";
			cin >> brand;
			cout << "Enter the model of the car: ";
			cin >> model;
			cout << endl;
			dealership.addCarToInventory(brand, model);
			break;
		case 2:
			cout << "Enter the brand of the car: ";
			cin >> brand;
			cout << "Enter the model of the car: ";
			cin >> model;
			cout << endl;
			dealership.sellCar(brand, model);
			break;
		case 3:
			dealership.printSummaryInventory();
			break;
		case 4:
			dealership.printDetailedInventory();
			break;
		case 5:
			cout << "Exit Program...\n";
			goodBye();
			status = false;
			break;
		default:
			cout << "----------------------------------\n";
			cout << "Error the options are 1 through 5!\n";
			cout << "----------------------------------\n\n";
		}

	}
	return false;
}

// goodbye method 
// This method is called prior to program termination
// It prints the phrase
// "Poli Auto Sales Inventory Management Console was developed by 
// member #1 name, member #1 ID# and member #2 name, member #2 ID#.
// Goodbye"
void goodBye() {
	cout << "Poli Auto Sales Inventory Management Console was developed by Anthony J. Colon Dominguez, ID#108365 and Diamaris Gonzalez Rodriguez ID#: 121589. Goodbye\n";
}