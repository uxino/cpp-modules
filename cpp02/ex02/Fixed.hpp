#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"
#include "cmath"

class Fixed
{
private:
    int fixedPoint;
    static int const mantissa = 8;
public:
    Fixed();
    Fixed(int value);
    Fixed(const float value);
    Fixed(const Fixed &cpy_fixed);
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed &operator = (const Fixed &cpy);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed();
};

std::ostream &operator << (std::ostream &output, const Fixed &fixed);

#endif