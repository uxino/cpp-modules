#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Animal Constructor called." << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}
Dog& Dog::operator =(const Dog &cpy)
{
    std::cout << "Dog Copy assigment constructor called." << std::endl;
    if (this == &cpy)
        return (*this);
    this->type = cpy.type;
    this->brain = new Brain(cpy.brain);
    return(*this);
}
Dog::Dog(const Dog &cpy) : Animal()
{
    std::cout << "Dog Copy constructor called." << std::endl;
    *this = cpy;
}
void Dog::makeSound() const
{
    std::cout << "Havvv Havv." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called." << std::endl;
    delete this->brain;
}