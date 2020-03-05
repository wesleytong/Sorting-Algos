#pragma once
#include <iostream>
#include "Array.h"

//insertion sort functions

//used in insertion sort
//shifts left until either current position is greater than lastVal or start of array is reached
template <class T>
void shiftLeft(Array<T> &a, T &lastVal, int numLeftElements)
{
	if (numLeftElements <= 0 || a[numLeftElements - 1] > lastVal)
	{
		a[numLeftElements] = lastVal;
	}
	else
	{
		a[numLeftElements] = a[numLeftElements - 1];
		shiftLeft(a, lastVal, numLeftElements - 1);
	}
}
//if there are elements, does insertion sort using shiftLeft
template <class T> 
void insertionSort(Array<T> &a, int numElements) //numElements is the remaining amount of elements to sort
{
	if (numElements > 1)
	{
		insertionSort(a, numElements - 1);
		T lastVal = a[numElements - 1];
		shiftLeft(a, lastVal, numElements - 1);

		for (int i = 0; i < a.sizeFn(); i++) //for loop to print
		{
			cout << a[i] << " ";
			output << a[i] << " ";
		}

		cout << endl;
		output << endl;
	}
}
