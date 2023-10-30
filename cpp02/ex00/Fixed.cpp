#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy_fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy_fixed;
}
Fixed& Fixed::operator = (const Fixed &cpy)
{
	if (this == &cpy)
		return (*this);
	std::cout << "Copy assignment operator called " << std::endl;
	this->setRawBits(cpy.fixedPoint);
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}
