#include "StockBroker.h"
StockBroker::StockBroker(string name, double percent)
{
	this->broker_name = name;
	this->commission_percent = percent;
}
StockBroker::StockBroker(const StockBroker& obj)
{
	this->broker_name = obj.getName();
	this->commission_percent = obj.getPercent();
}
StockBroker::~StockBroker()
{
	//NOTHING TO DESTROY
}
void StockBroker::setName(string name)
{
	this->broker_name = name;
}
void StockBroker::setPercent(double percent)
{
	this->commission_percent = percent;
}
string StockBroker::getName() const
{
	return this->broker_name;
}
double StockBroker::getPercent() const
{
	return this->commission_percent;
}
double StockBroker::calculateCommission(double sale) const
{
	return sale * (this->getPercent() / 100.0);
}
ostream& operator<<(ostream& out, const StockBroker& obj)
{
	cout << "Broker name : " << obj.getName() << endl;
	cout << "Commission % : " << fixed << setprecision(2) << obj.getPercent() << endl;
	return out;
}
istream& operator>>(istream& in, StockBroker& obj)
{
	string name;
	double percent;
	cout << "Enter the broker's name: "; cin >> name;
	cout << "Enter the broker's comission percent: ";
	cin >> percent;
	obj.setName(name);
	obj.setPercent(percent);
	return in;
}
