#include "Array.hpp"

template <typename T>
Array<T>::Array(unsigned int size)
{
	this->elements = new T[size];
	this->_size = size;
}

template <typename T>
Array<T>::Array()
{
	this->elements = NULL;
	this->_size = 0;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &arg)
{
	this->elements = new T[arg._size];
	this->_size = arg._size;
	for (size_t i = 0; i < arg._size; i++)
		this->elements[i] = arg.elements[i];
	return (*this);
}

template <typename T>
Array<T>::Array(Array<T> &cpy)
{
	this->elements = 0;
	*this = cpy;
}

template <typename T>
T& Array<T>::operator[](unsigned int n)
{
	if (n >= this->_size || n < 0)
		throw outOfBound();
	return (this->elements[n]);
}


