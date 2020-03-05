#pragma once
#include <iostream>
#include "Array.h"

//quicksort functions
//finds first element in left half of divided array less than pivot value
//if element at current left index is greater than pivot, calls move again
template <class T>
int moveLeft(Array<T> &a, int left, T &pivot)
{
	if (a[left] > pivot && left < a.sizeFn())
	{
		return moveLeft(a, left + 1, pivot);
	}

	return left;
}
//finds first element in right half of divided array that is greater than pivot value
template <class T>
int moveRight(Array<T> &a, int right, T &pivot)
{
	if (a[right] < pivot && right >= 0)
	{
		return moveRight(a, right - 1, pivot);
	}

	return right;
}
//finds first element in left half of array that is less than pivot value
template <class T>
int splitData(Array<T> &a, int left, int right, T &pivot)
{
	left++;
	right--;
	left = moveLeft(a, left, pivot);
	right = moveRight(a, right, pivot);
	if (left >= right)
	{
		return right;
	}
	else
	{
		T temp = a[left];
		a[left] = a[right];
		a[right] = temp;
	}
	splitData(a, left, right, pivot);
}
//pivot chosen is first element sorted 
template <class T> int split(Array<T> &a, int first, int last)
{
	T pivot = a[first];
	int left = first - 1;
	int right = last + 1;
	return splitData(a, left, right, pivot);
}

template <class T> void quickSort(Array<T> &a, int first, int last)
{
	if (first < last)
	{
		int pivotIndex = split(a, first, last);
		quickSort(a, first, pivotIndex);

		for (int i = 0; i < a.sizeFn(); i++)
		{
			cout << a[i] << " ";
			output << a[i] << " ";
		}
		cout << endl;
		output << endl;

		quickSort(a, pivotIndex + 1, last);
		for (int i = 0; i < a.sizeFn(); i++)
		{
			cout << a[i] << " ";
			output << a[i] << " ";
		}
		cout << endl;
		output << endl;
	}
}