#include "TeamLeader.h"
TeamLeader::TeamLeader() : ProductionWorker()
{
	bonus = 0;
	requiredHours = 0;
	attendHours = 0;
}
TeamLeader::TeamLeader(string name, int employeeNumber, int month, int day, int year, int shift, double payrate, double bonus, int requiredHours, int attendHours) : ProductionWorker(name, employeeNumber, month, day, year, shift, payrate)
{
	this->bonus = bonus;
	this->requiredHours = requiredHours;
	this->attendHours = attendHours;
}
void TeamLeader::setBonus(double bonus)
{
	this->bonus = bonus;
}

void TeamLeader::setRequiredHours(int requiredHours)
{
	this->requiredHours = requiredHours;
}

void TeamLeader::setAttendHours(int attendHours)
{
	this->attendHours = attendHours;
}

double TeamLeader::getBonus() const
{
	return bonus;
}

double TeamLeader::getRequiredHours() const
{
	return requiredHours;
}

double TeamLeader::getAttendHours() const
{
	return attendHours;
}

ostream& operator<<(ostream& strm, const TeamLeader& obj)
{
	strm << "\nName: " << obj.getName();
	strm << "\nNumber of Employee #" << obj.getEmployeeNumber();
	strm << "\nHire Date\n";
	strm << obj.getDate();
	strm << "\nShift: " << obj.getShift();
	cout << fixed << setprecision(2);
	strm << "\nPay rate: $" << obj.getPayRate() << "/hr";
	strm << "\nMonthly bonus: $" << obj.getBonus();
	strm << "\nRequired Hours: " << obj.getRequiredHours();
	strm << "\nAttended Hours: " << obj.getAttendHours();
	strm << endl;
	return strm;
}

istream& operator>>(istream& strm, TeamLeader& obj)
{
	string name;
	int number;
	Date date;
	int shift;
	double payrate;
	double bonus;
	int requiredHours;
	int attendedHours;

	cout << "Enter the name of the employee: ";
	strm >> name;
	cout << "Enter the mumber of the employee: ";
	strm >> number;
	cout << "Hire Date\n";
	strm >> date;
	do {
		cout << "Enter the shift (Enter 1 for day and 2 for night): ";
		strm >> shift;
		if (shift != 1 && shift != 2) {
			cout << "Error! The value must be 1 or 2!\n";
		}
	} while (shift != 1 && shift != 2);
	cout << "Enter pay rate: $";
	strm >> payrate;
	cout << "Enter the montly bonus: $";
	strm >> bonus;
	cout << "Enter required work hours: ";
	strm >> requiredHours;
	cout << "Enter attended work hours: ";
	strm >> attendedHours;
	obj.setName(name);
	obj.setEmployeeNumber(number);
	obj.setDate(date);
	obj.setShift(shift);
	obj.setPayRate(payrate);
	obj.setBonus(bonus);
	obj.setRequiredHours(requiredHours);
	obj.setAttendHours(attendedHours);
	return strm;
}
