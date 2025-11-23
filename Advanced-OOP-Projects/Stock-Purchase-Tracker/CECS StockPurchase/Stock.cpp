#include "Stock.h"
Stock::Stock()
{
	set("", 0.0);
}
Stock::Stock(const string sym, double price)
{
	set(sym, price);
}
Stock::Stock(const Stock& obj)
{
	set(obj.symbol, obj.sharePrice);
}
void Stock::set(string sym, double price)
{
	symbol = sym;
	sharePrice = price;
}
string Stock::getSymbol() const
{
	return symbol;
}
double Stock::getSharePrice() const
{
	return sharePrice;
}
ostream& operator<<(ostream& out, const Stock& obj)
{
	cout << "Share Symbol: " << obj.getSymbol() << endl;
	cout << "Share Price: $" << obj.getSharePrice() << endl;
	return out;
}
istream& operator>>(istream& in, Stock& obj)
{
	string symbol;
	double price;
	cout << "Enter the Share's Symbol: ";
	cin >> symbol;
	cout << "Enter the Share's Price: $";
	cin >> price;
	obj.set(symbol, price);
	return in;
}
