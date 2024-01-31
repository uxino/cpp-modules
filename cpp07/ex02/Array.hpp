#pragma once

#include <iostream>

template <typename T>
class Array
{
    private:
        T *elements;
        unsigned int _size;
    public:
		~Array()
		{
			delete[] elements;
		}
        Array()
		{
			this->elements = NULL;
			this->_size = 0;
		}
        Array(unsigned int size)
		{
			this->elements = new T[size];
			this->_size = size;
		}
		Array& operator=(const Array &arg)
		{
			this->elements = new T[arg._size];
			this->_size = arg._size;
			for (size_t i = 0; i < arg._size; i++)
				this->elements[i] = arg.elements[i];
			return (*this);
		}
		Array(Array &cpy)
		{
			this->elements = 0;
			*this = cpy;
		}
		T& operator[](unsigned int n)
		{
			if (n >= this->_size || n < 0)
				throw outOfBound();
			return (this->elements[n]);
		}
		class outOfBound : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Out of bound!");
				}
		};
};
