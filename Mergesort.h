#pragma once
#include <iostream>
#include "Array.h"

//copys an array from source to destination
template <class T>
void copyArray(Array<T> &destination, Array<T> &source, int first, int last)
{
	if (first <= last)
	{
		destination[last] = source[last];
		copyArray(destination, source, first, last - 1);
	}
}

template <class T>
void copySortedArray(Array<T> &destination, Array<T> &source, int i, int firstsubleft, int lastsubleft, int firstsubright, int lastsubright)
{
	if (firstsubleft <= lastsubleft && firstsubright <= lastsubright)
	{
		if (source[firstsubleft] >= source[firstsubright])
		{
			destination[i] = source[firstsubleft];
			copySortedArray(destination, source, i + 1, firstsubleft + 1, lastsubleft, firstsubright, lastsubright);
		}
		else
		{
			destination[i] = source[firstsubright];
			copySortedArray(destination, source, i + 1, firstsubleft, lastsubleft, firstsubright + 1, lastsubright);
		}
	}
	else if (firstsubleft <= lastsubleft)
	{
		destination[i] = source[firstsubleft];
		copySortedArray(destination, source, i + 1, firstsubleft + 1, lastsubleft, firstsubright, lastsubright);
	}
	else if (firstsubright <= lastsubright)
	{
		destination[i] = source[firstsubright];
		copySortedArray(destination, source, i + 1, firstsubleft, lastsubleft, firstsubright + 1, lastsubright);
	}
}

//merge functions
//uses temp array and copies subarray to temp then temp to original
template <class T>
void merge(Array<T> &a, int first, int mid, int last)
{
	Array<T> temp(a.sizeFn());
	int firstsubleft = first;
	int lastsubleft = mid;
	int firstsubright = mid + 1;
	int lastsubright = last;
	int i = firstsubleft;
	copySortedArray(temp, a, i, firstsubleft, lastsubleft, firstsubright, lastsubright);
	copyArray(a, temp, first, last);
}

template <class T>
void mergeSort(Array<T> &a, int first, int last)
{
	if (first < last)
	{
		int mid = (first + last) / 2;

		mergeSort(a, first, mid);
		for (int i = 0; i < a.sizeFn(); i++)
		{
			cout << a[i] << " ";
			output << a[i] << " ";
		}
		cout << endl;
		output << endl;

		mergeSort(a, mid + 1, last);
		for (int i = 0; i < a.sizeFn(); i++)
		{
			cout << a[i] << " ";
			output << a[i] << " ";
		}
		cout << endl;
		output << endl;

		merge(a, first, mid, last);
		for (int i = 0; i < a.sizeFn(); i++)
		{
			cout << a[i] << " ";
			output << a[i] << " ";
		}
		cout << endl;
		output << endl;
	}
}
