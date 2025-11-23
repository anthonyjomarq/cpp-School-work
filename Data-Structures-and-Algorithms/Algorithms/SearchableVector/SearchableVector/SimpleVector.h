// SimpleVector class template
#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H
#include <iostream>
#include <new> // Needed for bad_alloc exception
#include <cstdlib> // Needed for the exit function
using namespace std;
#include "SimpleVectorInterface.h"
template <class T>
class SimpleVector :public SimpleVectorInterface<T>
{
    //private:
protected:
    T* aptr; // To point to the allocated array
    void memError(); // Handles memory allocation errors
    void subError(); // Handles subscripts out of range
    int arraySize; //Number of elements of array
    int itemCount;
public:
    // Default constructor
    SimpleVector();
    // Constructor declaration
    SimpleVector(int);
    // Copy constructor declaration
    SimpleVector(const SimpleVector&);
    // Destructor declaration
    virtual ~SimpleVector();
    // Accessor to return the array size
    int getArraySize() const;
    // Accessor to return a specific element
    int getItemCount() const;
    T getElementAt(int position);
    // Overloaded [] operator declaration
    T& operator[](const int&);
    virtual bool add(const T& newEntry);
    virtual bool remove(const T& anEntry);
    virtual int getIndexOf(const T& targetEntry) const;
    virtual bool isEmpty() const;
    virtual void display()const;
};
template <class T>
SimpleVector<T>::SimpleVector()
{
    aptr = 0;
    arraySize = 0;
    itemCount = 0;
}
//************************************************************
// Constructor for SimpleVector class. Sets the size of the *
// array and allocates memory for it. *
//************************************************************
template <class T>
SimpleVector<T>::SimpleVector(int s)
{
    arraySize = s;
    itemCount = 0;
    // Allocate memory for the array.
    try
    {
        aptr = new T[s];
    }
    catch (bad_alloc)
    {
        memError();
    }
}
//*******************************************
// Copy Constructor for SimpleVector class. *
//*******************************************
template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector& obj)
{
    // Copy the array size.
    arraySize = obj.arraySize;
    itemCount = obj.itemCount;
    // Allocate memory for the array.
    aptr = new T[arraySize];
    if (aptr == 0)
        memError();
    // Copy the elements of obj's array.
    for (int count = 0; count < getItemCount(); count++)
        *(aptr + count) = *(obj.aptr + count);
}
//**************************************
// Destructor for SimpleVector class. *
//**************************************
template <class T>
SimpleVector<T>::~SimpleVector()
{
    if (itemCount > 0)
        delete[] aptr;
}
//********************************************************
// memError function. Displays an error message and *
// terminates the program when memory allocation fails. *
//********************************************************
template <class T>
void SimpleVector<T>::memError()
{
    cout << "ERROR:Cannot allocate memory.\n";
    exit(EXIT_FAILURE);
}
//************************************************************
// subError function. Displays an error message and *
// terminates the program when a subscript is out of range. *
//************************************************************
template <class T>
void SimpleVector<T>::subError()
{
    cout << "ERROR: Subscript out of range.\n";
    exit(EXIT_FAILURE);
}
//*******************************************************
// getElementAt function. The argument is a subscript. *
// This function returns the value stored at the *
// subcript in the array. *
//*******************************************************
template <class T>
T SimpleVector<T>::getElementAt(int sub)
{
    if (sub < 0 || sub > getItemCount())
        subError();
    return aptr[sub];
}
//********************************************************
// Overloaded [] operator. The argument is a subscript. *
// This function returns a reference to the element *
// in the array indexed by the subscript. *
//********************************************************
template <class T>
T& SimpleVector<T>::operator[](const int& sub)
{
    if (sub < 0 || sub > getItemCount())
        subError();
    return aptr[sub];
}
template <class T>
int SimpleVector<T>::getArraySize() const {
    return arraySize;
}
template <class T>
int SimpleVector<T>::getItemCount() const {
    return itemCount;
}
template <class T>
bool SimpleVector<T>::add(const T& newEntry) {
    bool hasRoomToAdd = (itemCount < getArraySize());
    if (hasRoomToAdd) {
        aptr[itemCount] = newEntry;
        itemCount++;
    }//end if
    return hasRoomToAdd;
}
template <class T>
int SimpleVector<T>::getIndexOf(const T& targetEntry) const {
    bool found = false;
    int result = -1;
    int searchIndex = 0;
    while (!found && (searchIndex < getItemCount())) {
        if (aptr[searchIndex] == targetEntry) {
            found = true;
            result = searchIndex;
        } //end if
        else {
            searchIndex++;
        }//end else
    }//end whule
    return result;
}
template <class T>
bool SimpleVector<T>::isEmpty() const {
    bool result;
    if (getItemCount() == 0)
        result = true;
    else result = false;
    return result;
}
template <class T>
bool SimpleVector<T>::remove(const T& anEntry) {
    int locatedIndex = getIndexOf(anEntry);
    bool canRemoveItem = !isEmpty() && (locatedIndex > -1);
    if (canRemoveItem) {
        itemCount--;
        aptr[locatedIndex] = aptr[itemCount];
    }//end if
    return canRemoveItem;
}
template <class T>
void SimpleVector<T>::display() const {
    cout << "El contenido dentro del arreglo es:";
    for (int index = 0; index < getItemCount(); index++) {
        cout << aptr[index] << endl;
    }//end for
}
#endif
