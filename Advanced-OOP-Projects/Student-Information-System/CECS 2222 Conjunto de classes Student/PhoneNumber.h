#pragma once
#include "MyString.h"
class Phone {
    friend ostream& operator<<(ostream&, const Phone&);
    friend istream& operator>>(istream&, Phone&);
private:
    MyString areaCode; //3-digit area code
    MyString exchange; //3 digit exchange
    MyString line; //4 digit of line
public:
    Phone(const MyString&, const MyString&, const MyString&);
    Phone(const Phone&);
    Phone();
    ~Phone();
    void setValues(const MyString&, const MyString&, const MyString&);
    void setAreaCode(const MyString&);
    void setExchange(const MyString&);
    void setLine(const MyString&);
    const MyString& getAreaCode() const;
    const MyString& getExchange() const;
    const MyString& getLine() const;
};//end class Phone