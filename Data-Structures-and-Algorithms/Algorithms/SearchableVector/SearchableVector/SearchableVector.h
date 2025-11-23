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
    //binary search
    {
        int first = 0;// First element of list
        int last = this->getItemCount() - 1;// last element of the list

        int middle;// variable containing the current 

        while (first <= last) {
            middle = (first + last) / 2;
            if (this->operator[](middle) == item)
                return middle;
            else if (this->operator[](middle) > item)
                last = middle - 1;// toss out the second remaining half of
                // the array and search the first 
            else
                first = middle + 1; // toss out the first remaining half of
            // the array and search the second
        }
        return -1;// indicates that value is not in the array

    }
}
#endif


