#include "iter.hpp"
#include <iostream>

template <typename T>

void func(const T &ch) {
    std::cout << static_cast<int>(ch) << std::endl;
}

int main()
{
    char array[] = {'a', 'b', 'c', 'd', 'e'};
    iter(array, 5, func);
    return 0;
}
