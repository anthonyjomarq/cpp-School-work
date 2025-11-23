#include "StockTransaction.h"
StockTransaction::StockTransaction(StockPurchase* purchases, StockSold* sales, int
	purchase_count, int sale_count)
{
	if (purchases == nullptr) {
		this->purchases = new StockPurchase[100];
	}
	else {
		this->purchases = purchases;
	}
	if (sales == nullptr) {
		this->sales = new StockSold[100];
	}
	else {
		this->sales = sales;
	}
	this->set_purchase_count(purchase_count);
	this->set_sale_count(sale_count);
	if (purchase_count != 0) {
	}
	if (sale_count != 0) {
	}
}
StockTransaction::StockTransaction(const StockTransaction& obj)
{
	this->purchases = obj.purchases;
	this->sales = obj.sales;
	this->set_purchase_count(obj.purchase_count);
	this->set_sale_count(obj.sale_count);
}
StockTransaction::~StockTransaction()
{
	delete[] purchases;
	purchases = nullptr;
	delete[] sales;
	sales = nullptr;
}
void StockTransaction::addPurchase()
{
	StockPurchase new_purchase;
	cin >> new_purchase;
	*(purchases + purchase_count++) = new_purchase;
}void StockTransaction::addSale()
{
	StockSold new_sale;
	cin >> new_sale;
	*(sales + sale_count++) = new_sale;
}
double StockTransaction::getCost() const
{
	double total = 0;
	StockPurchase ref;
	for (int i = 0; i < get_purchases_count(); i++) {
		ref = *(purchases + i);
		total += ref.getCost();
	}
	return total;
}
double StockTransaction::getEarnings() const
{
	double total = 0;
	StockSold ref;
	for (int i = 0; i < get_sale_count(); i++) {
		ref = *(sales + i);
		total += ref.getProfit();
	}
	return total;
}
void StockTransaction::set_purchase_count(int count)
{
	this->purchase_count = count;
}
void StockTransaction::set_sale_count(int count)
{
	this->sale_count = count;
}
int StockTransaction::get_purchases_count() const
{
	return this->purchase_count;
}
int StockTransaction::get_sale_count() const
{
	return this->sale_count;
}
void StockTransaction::print_purchases() const
{
	for (int i = 0; i < purchase_count; i++) {
		StockPurchase ref = *(purchases + i);
		cout << ref;
	}
}
void StockTransaction::print_sales() const {
	for (int i = 0; i < sale_count; i++) {
		StockSold ref = *(sales + i);
		cout << ref;
	}
}
ostream& operator<<(ostream& out, const StockTransaction& obj)
{
	cout << "++ TRANSACTION ++" << endl;
	cout << "Purchases: " << obj.purchase_count << endl;
	cout << "Sales: " << obj.sale_count << endl;
	obj.print_purchases();
	obj.print_sales();
	cout << endl;
	cout << "Total Cost: $" << fixed << setprecision(2) << obj.getCost() << endl;
	cout << "Total Earnings: $" << fixed << setprecision(2) << obj.getEarnings() <<
		endl;
	cout << "Net Profits: $" << fixed << setprecision(2) << obj.getEarnings() -
		obj.getCost() << endl;
	return out;
}
istream& operator>>(istream& in, StockTransaction& obj)
{
	int purchase_max, sales_max;
	cout << "Enter the amount of purchases: ";
	cin >> purchase_max;
	cout << "Enter the amount of sales: ";
	cin >> sales_max;
	//Add purchases
	cout << "Enter the purchase info..." << endl;
	obj.purchases = new StockPurchase[100];
	obj.set_purchase_count(0);
	for (int i = 0; i < purchase_max; i++) {
		cout << "Purchase #" << i + 1 << endl;
		obj.addPurchase();
	}
	//Add Sales
	cout << "Enter the sales info..." << endl;
	obj.sales = new StockSold[100];
	obj.set_sale_count(0);
	for (int i = 0; i < sales_max; i++) {
		cout << "Sale #" << i + 1 << endl;
		obj.addSale();
	}
	return in;
}
