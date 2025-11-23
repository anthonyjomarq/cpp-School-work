//File TextBook.h
#ifndef TEXTBOOK
#define TEXTBOOK
#include <iostream>
#include <string>
using namespace std;

// TextBook class 
class TextBook 
{
private:
    string title; // Book title 
    string author; // Author name 
    string publisher; // Publisher name 
public:
    // The default constructor stores empty strings 
    // in the string objects. 
    TextBook();
    // Constructor 
    TextBook(string textTitle, string auth, string pub);
    TextBook(const TextBook& aTextBook);
    ~TextBook();
    // set function 
    void set(string textTitle, string auth, string pub);
    void set(TextBook aTextBook);
    void setTitle(string textTitle);
    void setAuthor(string auth);
    void setPublisher(string pub);
    string getTitle() const;
    string getAuthor() const;
    string getPublisher() const;
    // print function 
    void print() const;
    friend ostream& operator << (ostream& out, TextBook& obj);
    friend istream& operator >> (istream& inp, TextBook& obj);
};
#endif

   