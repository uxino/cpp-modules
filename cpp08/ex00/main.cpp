#include "easyfind.hpp"

int main()
{
    std::vector<int> vect;

    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);

    std::cout << *easyfind(vect, 2) << std::endl;
    try
    {
        std::cout << *easyfind(vect, 1231);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}