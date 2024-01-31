#pragma once

#include <iostream>

template <typename T>
class Array
{
    private:
        T *elements;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int _size);
};
