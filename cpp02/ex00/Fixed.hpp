#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"

class Fixed
{
	private:
		int integer;
		static int const tank = 8;
	public:
		Fixed();
		Fixed(const Fixed &cpy_fixed);
		Fixed &operator = (const Fixed &cpy);
		int getRawBits(void) const;
		void setRawBits(int const raw); 
		~Fixed();
};

#endif
