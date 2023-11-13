#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Constructor called." << std::endl;
    this->type = "Animal";
}
Animal& Animal::operator =(const Animal &cpy)
{
    std::cout << "Animal Copy assigment constructor called." << std::endl;
    this->type = cpy.type;
    return(*this);
}
Animal::Animal(const Animal &cpy)
{
    std::cout << "Animal Copy constructor called." << std::endl;
    *this = cpy;
}
void Animal::makeSound() const
{
    std::cout << "Animal sounddd." << std::endl;
}
std::string Animal::getType() const
{
    return(this->type);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called." << std::endl;
}