//File RationalNumber.cpp
#include <iostream>
using namespace::std;
#include "RationalNumber.h"

RationalNumber::RationalNumber(int aNum, int aDen) {
	setNum(aNum);
	setDen(aDen);
}
RationalNumber::RationalNumber(const RationalNumber& obj) {
	setNum(obj.getNum());
	setDen(obj.getDen());
}
void RationalNumber::setNum(int aNum) {
	num = aNum;
}
void RationalNumber::setDen(int aDen) {
	den = aDen;
}
int RationalNumber::getNum() const {
	return num;
}
int RationalNumber::getDen() const {
	return den;
}

int RationalNumber::GCD() const {
	int x, y, r;

	if (getDen() >= getNum()) {
		x = getDen();
		y = getNum();
	}
	else {
		y = getDen();
		x = getNum();
	}
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}
RationalNumber& RationalNumber::operator=(const RationalNumber& right)
{
	setNum(right.getNum());
	setDen(right.getDen());
	return *this;
}
RationalNumber RationalNumber:: operator + (const RationalNumber& right) {
	RationalNumber temp;
	temp.setNum(this->getNum() * right.getDen() + this->getDen() * right.getNum());
	temp.setDen(this->getDen() * right.getDen());
	return temp;
}
RationalNumber RationalNumber::operator-(const RationalNumber& right)
{
	RationalNumber temp;
	temp.setNum(getNum() * right.getDen() - getDen() * right.getNum());
	temp.setDen(getDen() * right.getDen());
	return temp;
}
RationalNumber RationalNumber::operator/(const RationalNumber& right)
{
	RationalNumber temp;
	temp.setNum(getNum() * right.getDen());
	temp.setDen(getDen() * right.getNum());
	return temp;
}
RationalNumber RationalNumber::operator*(const RationalNumber& right)
{
	RationalNumber temp;
	temp.setNum(getNum() * right.getNum());
	temp.setDen(getDen() * right.getDen());
	return temp;
}
bool RationalNumber::operator<(const RationalNumber& right)
{
	RationalNumber temp1, temp2;
	temp1.setDen(getDen() * right.getDen());
	temp2.setDen(right.getDen() * getDen());
	temp1.setNum(getNum() * right.getDen());
	temp2.setNum(right.getNum() * getDen());
	return temp1.num < temp2.num;
}
bool RationalNumber::operator>(const RationalNumber& right)
{
	RationalNumber temp1, temp2;
	temp1.den = getDen() * right.getDen();
	temp2.den = right.getDen() * getDen();
	temp1.num = getNum() * right.getDen();
	temp2.num = right.getNum() * getDen();
	return temp1.num > temp2.num;
}
bool RationalNumber::operator==(const RationalNumber& right)
{
	RationalNumber temp1, temp2;
	temp1.den = getDen() * right.getDen();
	temp2.den = right.getDen() * getDen();
	temp1.num = getNum() * right.getDen();
	temp2.num = right.getNum() * getDen();
	return temp1.num == temp2.num;
}
bool RationalNumber::operator!=(const RationalNumber& right)
{
	RationalNumber temp1, temp2;
	temp1.den = getDen() * right.getDen();
	temp2.den = right.getDen() * getDen();
	temp1.num = getNum() * right.getDen();
	temp2.num = right.getNum() * getDen();
	return temp1.num != temp2.num;
}
RationalNumber& RationalNumber::operator++()
{
	num = num + den;
	return *this;
}
RationalNumber& RationalNumber::operator++(int)
{
	RationalNumber temp(num, den);
	num = num + den;
	return temp;
}
RationalNumber& RationalNumber::operator--()
{
	num = num - den;
	return *this;
}
RationalNumber& RationalNumber::operator--(int)
{
	RationalNumber temp = *this;
	num = num - den;
	return temp;
}
ostream& operator << (ostream& strm, const RationalNumber& obj) {
	strm << obj.getNum() / obj.GCD() << "/" << obj.getDen() / obj.GCD();
	return strm;
}
istream& operator >> (istream& strm, RationalNumber& obj) {
	cout << "Entre el numerador de la fraccion:";
	cin >> obj.num;
	cout << "Entre el denominador de la fracion:";
	cin >> obj.den;
	return strm;
}
