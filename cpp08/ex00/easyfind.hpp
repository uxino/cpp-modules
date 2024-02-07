#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class NotFound : public std::exception
{
public:
    virtual const char *what() const throw()
    {
        return ("The value is not found!");
    }
};
template<typename T>
typename T::iterator easyfind(T &t, int n)
{
	typename T::iterator it = std::find(t.begin(), t.end(), n);
	if (it == t.end())
		throw NotFound();
	return it;
}