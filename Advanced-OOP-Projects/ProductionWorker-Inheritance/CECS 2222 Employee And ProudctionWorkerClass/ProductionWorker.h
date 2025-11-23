#pragma once
#include "Employee.h"
#include <iomanip>
class ProductionWorker : public Employee
{
private:
	int shift;
	double payrate;
public:
	ProductionWorker();
	ProductionWorker(string name, int employeeNumber, int month, int day, int year, int shift, double payrate);
	//mutators 
	void setShift(int shift);
	void setPayRate(double payrate);
	string getShift() const;
	double getPayRate() const;
	friend ostream& operator << (ostream& strm, const ProductionWorker& obj);
	friend istream& operator >> (istream& strm, ProductionWorker& obj);
};

