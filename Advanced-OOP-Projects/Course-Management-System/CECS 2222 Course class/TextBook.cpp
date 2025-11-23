//File TextBook.cpp
#include "TextBook.h"
#include <iostream>
#include <string>
using namespace::std;
// The default constructor stores empty strings 
   // in the string objects. 
TextBook::TextBook() {
    set("DEFAULT", "DEFAULT", "DEFAULT");
}

// Constructor 
TextBook::TextBook(string textTitle, string auth, string pub)
{
    set(textTitle, auth, pub);
}

TextBook::TextBook(const TextBook& aTextBook)
{
    setTitle(aTextBook.getTitle());
    setAuthor(aTextBook.getAuthor());
    setPublisher(aTextBook.getPublisher());
}

TextBook::~TextBook()
{
    //cout << "Destruyendo objeto\n";
    //system("pause");
}

// set function 
void TextBook::set(string textTitle, string auth, string pub)
{
    title = textTitle;
    author = auth;
    publisher = pub;
}

void TextBook::set(TextBook aTextBook)
{
    set(aTextBook);
}

void TextBook::setTitle(string textTitle)
{
    title = textTitle;
}

void TextBook::setAuthor(string auth)
{
    author = auth;
}

void TextBook::setPublisher(string pub)
{
    publisher = pub;
}

string TextBook::getTitle() const
{
    return title;
}

string TextBook::getAuthor() const
{
    return author;
}

string TextBook::getPublisher() const
{
    return publisher;
}

// print function 
void TextBook::print() const
{
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Publisher: " << publisher << endl;
}

ostream& operator<<(ostream& out, TextBook& obj)
{
    cout << "Title: " << obj.title << endl;
    cout << "Author: " << obj.author << endl;
    cout << "Publisher: " << obj.publisher << endl;
    return out;
}

istream& operator>>(istream& inp, TextBook& obj)
{
    string tmpAuthor;
    string tmpTitle;
    string tmpPublisher;

    cout << "Enter the title of the book: ";
    getline(cin, tmpTitle, '\n');
    cout << "Enter the author of the book: ";
    getline(cin, tmpAuthor, '\n');
    cout << "Enter the publisher of the book: ";
    getline(cin, tmpPublisher, '\n');

    obj.set(tmpTitle, tmpAuthor, tmpPublisher);
    return inp;
}
