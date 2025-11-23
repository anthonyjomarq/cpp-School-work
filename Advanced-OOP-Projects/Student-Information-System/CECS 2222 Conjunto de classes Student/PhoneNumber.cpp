#include<iostream>
#include<cstring>
#include<iomanip>
using namespace::std;
#include "PhoneNumber.h"
ostream& operator<<(ostream& output, const Phone& tempPhone)
{
    output << "(" << tempPhone.areaCode << ") " << tempPhone.exchange << " - "<<tempPhone.line<<endl;
        return output;
}//end function operator <<
istream& operator>>(istream& input, Phone& tempPhone)
{
    input >> tempPhone.areaCode;
    input >> tempPhone.exchange;
    input >> tempPhone.line;
    return input;
}//end function operator >>
Phone::Phone() :areaCode("0000"), exchange("000"), line("0000")
{
}//end Phone
Phone::Phone(const MyString& tempAreaCode, const MyString& tempExchange,
    const MyString& tempLine)
    : areaCode(tempAreaCode), exchange(tempExchange), line(tempLine)
{
}//end Phone constructor
Phone::Phone(const Phone& tempPhone) : areaCode(tempPhone.areaCode),
exchange(tempPhone.exchange), line(tempPhone.line)
{
}//end Phone copy constructor
void Phone::setValues(const MyString& tempAreaCode, const MyString& tempExchange,
    const MyString& tempLine)
{
    setAreaCode(tempAreaCode);
    setExchange(tempExchange);
    setLine(tempLine);
}//end Phone copy constructor
void Phone::setAreaCode(const MyString& tempAreaCode)
{
    areaCode = tempAreaCode;
}//end setAreaCode
void Phone::setExchange(const MyString& tempExchange)
{
    exchange = tempExchange;
}//end setExchange
void Phone::setLine(const MyString& tempLine)
{
    line = tempLine;
}//end setLine
Phone::~Phone()
{
    cout << "Phone object destructor " << endl;
}//end Phone destructor
const MyString& Phone::getAreaCode() const
{
    return this->areaCode;
}//end getAreaCode
const MyString& Phone::getExchange() const
{
    return this->exchange;
}//end getExchange
const MyString& Phone::getLine() const
{
    return this->line;
}//end getLine