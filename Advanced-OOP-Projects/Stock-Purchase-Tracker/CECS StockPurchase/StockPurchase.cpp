#include "StockPurchase.h"


StockPurchase::StockPurchase() :broker(), stock()
{
	shares = 0;
}

StockPurchase::StockPurchase(const Stock& stockObject, int numShares, const StockBroker& brokerobj)
{
	stock = stockObject;
	broker = brokerobj;
	shares = numShares;
}

double StockPurchase::getCost() const
{
	double purchase, commission;
	purchase = shares * stock.getSharePrice();
	commission = broker.calculateCommission(purchase);

	return purchase + commission;
}

ostream& operator<<(ostream& out, const StockPurchase& obj)
{
	cout << "+ Purchase +" << endl;
	cout << obj.stock;
	cout << "Share Count: " << obj.shares << endl;
	cout << obj.broker;
	cout << "Purchase Cost: $" << obj.getCost() << endl;
	return out;
}

istream& operator>>(istream& in, StockPurchase& obj)
{
	cin >> obj.stock;
	cout << "Enter the amount of shares to purchase: ";
	cin >> obj.shares;
	cin >> obj.broker;
	return in;
}
