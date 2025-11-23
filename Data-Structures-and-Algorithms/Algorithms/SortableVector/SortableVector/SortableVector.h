#pragma once
#include "SimpleVector.h"

template <class T>
class SortableVector : public SimpleVector<T>
{
public:
	//Constructors and Destructor
	SortableVector();
	SortableVector(int size);
	SortableVector(const SortableVector& obj);

	//Utils
	void sort();
};

template<class T>
SortableVector<T>::SortableVector() : SimpleVector<T>()
{
	//PASS
}

template<class T>
SortableVector<T>::SortableVector(int size) : SimpleVector<T>(size)
{
	//PASS
}

template<class T>
SortableVector<T>::SortableVector(const SortableVector& obj) : SimpleVector<T>(obj.getArraySize())
{
	for (int count = 0; count < this->getArraysize(); count++) {
		this->operator[](count) = obj[count];
	}
}



template<class T>
void SortableVector<T>::sort()
{
    int startScan;
    T minIndex, minValue;
    int lastValue = this->getItemCount() - 1;
    for (startScan = 0; startScan < lastValue; startScan++)
    {
        minIndex = startScan;
        minValue = this->operator[](startScan);
        for (int index = startScan + 1; index < this->getItemCount(); index++)
        {
            if (this->operator[](index) < minValue)
            {
                minValue = this->operator[](index);
                minIndex = index;
            }
        }
        this->operator[](minIndex) = this->operator[](startScan);
        this->operator[](startScan) = minValue;
    }
}