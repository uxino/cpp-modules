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
Fixed::Fixed(int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPoint = value << mantissa;
}

float Fixed::toFloat(void) const
{
    return ((float)this->fixedPoint / (1 << mantissa));
}

int Fixed::toInt(void) const
{

    return (this->fixedPoint >> this->mantissa);
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPoint = (int)roundf(value * pow(2,this->mantissa));
}

Fixed& Fixed::operator = (const Fixed &cpy)
{
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

std::ostream &operator << (std::ostream &output, const Fixed &fixed)
{
    output << fixed.toFloat();
    return output;
}

Fixed &Fixed::operator++()
{
    this->fixedPoint++;
    return (*this);
}
Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    this->fixedPoint++;
    return (tmp);
}
Fixed &Fixed::operator--()
{
    this->fixedPoint--;
    return (*this);
}
Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    this->fixedPoint--;
    return (tmp);
}
Fixed & Fixed::min(Fixed &r1, Fixed &r2)
{
    return ((r1.fixedPoint > r2.fixedPoint) ? r2 : r1);
}
Fixed& Fixed::max(Fixed &r1, Fixed &r2)
{
    return ((r1.fixedPoint > r2.fixedPoint) ? r1 : r2);
}

const Fixed& Fixed::min(const Fixed &r1, const Fixed &r2)
{
    return ((r1.fixedPoint > r2.fixedPoint) ? r2 : r1);
}
const Fixed& Fixed::max(const Fixed &r1, const Fixed &r2)
{
    return ((r1.fixedPoint > r2.fixedPoint) ? r1 : r2);
}

bool Fixed::operator < (const Fixed &r) const
{
    return  (this->fixedPoint < r.fixedPoint);
}
bool Fixed::operator > (const Fixed &r) const
{
    return (this->fixedPoint > r.fixedPoint);
}
bool Fixed::operator >= (const Fixed &r) const
{
    return (this->fixedPoint >= r.fixedPoint);
}
bool Fixed::operator <= (const Fixed &r) const
{
    return (this->fixedPoint <= r.fixedPoint);
}
bool Fixed::operator == (const Fixed &r) const
{
    return (this->fixedPoint == r.fixedPoint);
}
bool Fixed::operator != (const Fixed &r) const
{
    return (this->fixedPoint != r.fixedPoint);
}
float Fixed::operator + (const Fixed &r) const
{
    return (this->toFloat() + r.toFloat());
}
float Fixed::operator - (const Fixed &r) const
{
    return (this->toFloat() - r.toFloat());
}
float Fixed::operator / (const Fixed &r) const
{
    return (this->toFloat() / r.toFloat());
}
float Fixed::operator * (const Fixed &r) const
{
    return (this->toFloat() * r.toFloat());
}