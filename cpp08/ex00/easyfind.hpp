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
typename T::iterator easyfind(T &container,int value)
{
    typename T::iterator item = container.begin();

    while (item != container.end())
    {
        if (*item == value)
            return (item);
        ++item;
    }
    throw NotFound();
}