#include "StockSold.h"
StockSold::StockSold() :broker(), stock()
{
	shares = 0;
}
StockSold::StockSold(const Stock& stockObject, int numShares, const StockBroker&
	brokerobj)
{
	stock = stockObject;
	broker = brokerobj;
	shares = numShares;
}
double StockSold::getProfit() const
{
	double sale, commission;
	sale = shares * stock.getSharePrice();
	commission = broker.calculateCommission(sale);
	return sale - commission;
}
ostream& operator<<(ostream& out, const StockSold& obj)
{
	cout << "+ Sale +" << endl;
	cout << obj.stock;
	cout << "Share Count: " << obj.shares << endl;
	cout << obj.broker;
	cout << "Sale Cost: $" << obj.getProfit() << endl;
	return out;
}
istream& operator>>(istream& in, StockSold& obj)
{
	cin >> obj.stock;
	cout << "Enter the amount of shares to sell: ";
	cin >> obj.shares;
	cin >> obj.broker;
	return in;
}