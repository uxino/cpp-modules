#pragma once

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>(){};
        ~MutantStack(){}
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return(std::stack<T>::c.begin());
        }
        iterator end()
        {
            return(std::stack<T>::c.end());
        }
        MutantStack &operator=(const MutantStack &copy)
        {
            std::stack<T>::operator=(copy);
            return (*this);
        }
        MutantStack(const MutantStack &copy) : std::stack<T>(copy){}
};


