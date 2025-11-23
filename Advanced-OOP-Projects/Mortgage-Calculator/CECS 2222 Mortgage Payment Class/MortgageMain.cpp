#include <iostream>
#include <string>
#include "MortgagePayment.h"
using namespace::std;

int main()
{
	Mortgage house1;
	string name;
	string ss;
	string number;
	string direction;
	double loan;
	double rate;
	int years;
	cout << "Enter the name of the owner: ";
	getline(cin, name);
	house1.setName(name);
	cout << "Enter your social security number(xxx-xx-xxxx): ";
	cin >> ss;
	house1.setSocialSecurity(ss);
	cout << "Enter the phone number(xxx-xxx-xxxx): ";
	cin >> number;
	house1.setNumber(number);
	cout << "Enter the direction of the house: ";
	cin >> direction;
	getline(cin, direction);
	house1.setDirection(direction);
	cout << "Enter the loan taken: $";
    cin >> loan;
	house1.setLoan(loan);
	cout << "Enter the the annual interest rate (%): ";
	cin >> rate;
	house1.setRate(rate);
	cout << "Enter the number of years of the loan: ";
	cin >> years;
	house1.setYears(years);
	house1.display();
	return 0;

}
/*Enter the name of the owner: Anthony J. Colon
Enter your social security number(xxx-xx-xxxx): 999-99-9999
Enter the phone number(xxx-xxx-xxxx): 787-550-2190
Enter the direction of the house: #ABC Carolina, Puerto Rico, 00999
Enter the loan taken: $100000
Enter the the annual interest rate (%): 3
Enter the number of years of the loan: 1

        MORTAGE
Name: Anthony J. Colon
Social Security: 999-99-9999
Number: #787-550-2190
Direction:  Carolina, Puerto Rico, 00999
Monthly Payment: $8469.37
Total Payment: $101632.44

DESTROYING OBJECT
Press any key to continue . . .*/