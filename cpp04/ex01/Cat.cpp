#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Animal Constructor called." << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}
Cat& Cat::operator =(const Cat &cpy)
{
    std::cout << "Cat Copy assigment constructor called." << std::endl;
    if (this == &cpy)
        return (*this);
    this->type = cpy.type;
    this->brain = new Brain(*(cpy.brain));
    return(*this);
}
Cat::Cat(const Cat &cpy) : Animal()
{
    std::cout << "Cat Copy constructor called." << std::endl;
    *this = cpy;
}
void Cat::makeSound() const
{
    std::cout << "Meowwww Meowww." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called." << std::endl;
    delete this->brain;
}