#pragma once
//array template class
template <class T> 
class Array
{
private:
	int size;
	T *arr;
public:
	Array(int size = 1);
	~Array();
	int sizeFn();
	T &operator[](int i);
};

template<class T>
Array<T>::Array(int size) : size(size), arr(new T[size]) {}
template<class T> 
Array<T>::~Array()
{
	delete[] arr;
}
template<class T> 
int Array<T>::sizeFn()
{
	return size;
}

template<class T>
T& Array<T>::operator[](int i)
{
	return arr[i];
}