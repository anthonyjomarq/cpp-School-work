#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H
#include "SimpleVector.h"
template <class T>
class SearchableVector : public SimpleVector<T>
{
public:
    // Default constructor
    SearchableVector();
    // Constructor
    SearchableVector(int size);
    // Copy constructor
    SearchableVector(const SearchableVector&);
    // Accessor to find an item
    int findItem(const T);
};
//*******************************************************
// Copy constructor *
//*******************************************************
// Default constructor
template <class T>
SearchableVector<T>::SearchableVector() : SimpleVector<T>() { }
// Constructor
template <class T>
SearchableVector<T>::SearchableVector(int size) : SimpleVector<T>(size) { }
template <class T>
SearchableVector<T>::SearchableVector(const SearchableVector& obj)
    : SimpleVector<T>(obj.getArraysize())
{
    for (int count = 0; count < this->getArraysize(); count++)
        this->operator[](count) = obj[count];
}
//********************************************************
// findItem function *
// This function searches for item. If item is found *
// the subscript is returned. Otherwise −1 is returned. *
//********************************************************
template <class T>
int SearchableVector<T>::findItem(const T item)
{
    for (int count = 0; count <= this->getItemCount(); count++)
    {
        if (this->operator[](count) == item)
            return count;
    }
    return -1;
}
#endif

