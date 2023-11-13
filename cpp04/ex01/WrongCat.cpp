#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat &copy)
{
    std::cout << "WrongCat copy assignment constructor called" << std::endl;
    this->type = copy.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Cats don’t bark" << std::endl;
}