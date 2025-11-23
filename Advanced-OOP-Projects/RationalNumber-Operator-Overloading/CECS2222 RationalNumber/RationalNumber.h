//File RationalNumber.h
#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H
#include<iostream>
using namespace::std;

class RationalNumber {
private:
	int num, den;
public:
	RationalNumber(int aNum = 0, int aDen = 1);
	RationalNumber(const RationalNumber& obj);
	void setNum(int aNum);
	void setDen(int aDen);
	int getNum() const;
	int getDen() const;
	//Algoritmo de Euclides
	int GCD() const;
	//Asignar
	RationalNumber& operator = (const RationalNumber& right);
	//Operaciones basicas
	RationalNumber operator + (const RationalNumber& right);
	RationalNumber operator - (const RationalNumber& right);
	RationalNumber operator / (const RationalNumber& right);
	RationalNumber operator * (const RationalNumber& right);
	//Operaciones Relaciones 
	bool operator < (const RationalNumber&);
	bool operator > (const RationalNumber&);
	bool operator == (const RationalNumber&);
	bool operator != (const RationalNumber&);
	//Operaciones de input/output
	friend ostream& operator << (ostream& strm, const RationalNumber& obj);
	friend istream& operator >> (istream& strm, RationalNumber& obj);
	//Operaciones Unitarios 
	RationalNumber& operator ++ ();//Prefix ++ 
	RationalNumber& operator ++ (int);//Postfix ++
	RationalNumber& operator -- ();//Prefix -- 
	RationalNumber& operator -- (int);//Postfix --



};
#endif
