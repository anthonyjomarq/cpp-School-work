#include "ProductionWorker.h"

ProductionWorker::ProductionWorker() : Employee()
{
	shift = 1;
	payrate = 0;
}
ProductionWorker::ProductionWorker(string name, int employeeNumber, int month, int day, int year, int shift, double payrate) : Employee(name, employeeNumber, month, day, year)
{
	this->shift = shift;
	this->payrate = payrate;
}
void ProductionWorker::setShift(int shift)
{
	this->shift = shift;
}

void ProductionWorker::setPayRate(double payrate)
{
	this->payrate = payrate;
}
string ProductionWorker::getShift() const
{
	if (shift == 1)
		return "Day";
	return "Night";
}

double ProductionWorker::getPayRate() const
{
	return payrate;
}

ostream& operator<<(ostream& strm, const ProductionWorker& obj)
{
	strm << "\nName: " << obj.getName();
	strm << "\nNumber of Employee #" << obj.getEmployeeNumber();
	strm << "\nHire Date\n";
	strm << obj.getDate();
	strm << "\nShift: " << obj.getShift();
	strm << fixed << setprecision(2);
	strm << "\nPay rate: $" << obj.getPayRate() << "/hr";
	return strm;
}

istream& operator>>(istream& strm, ProductionWorker& obj)
{
	string name;
	int number;
	Date date;

	cout << "Enter the name of the employee: ";
	strm >> name;
	cout << "Enter the mumber of the employee: ";
	strm >> number;
	cout << "Hire Date\n";
	strm >> date;
	cout << "Enter the shift (Enter 1 for day and 2 for night): ";
	strm >> obj.shift;
	cout << "Enter pay rate: $";
	strm >> obj.payrate;
	obj.setName(name);
	obj.setEmployeeNumber(number);
	obj.setDate(date);
	return strm;
}
