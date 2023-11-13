#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called." << std::endl;
}
Brain& Brain::operator=(const Brain &cpy)
{
    std::cout << "Brain Copy assigment constructor called." << std::endl;
    for (int i = 0; i < 100; ++i)
        this->idea[i] = cpy.idea[i];
    return (*this);
}
Brain::Brain(const Brain &cpy)
{
    std::cout << "Brain copy constructor called." << std::endl;
    *this = cpy;
}
Brain::~Brain()
{
    std::cout << "Brain destructor called." << std::endl;
}