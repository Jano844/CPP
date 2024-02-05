

#pragma once

#include <iostream>

class Fixed
{
private:
	int					fixed_point;
	static const int	const_number = 8;
public:
	Fixed(/* args */); // default contructor
	Fixed(const Fixed &reference); // copy constructor
	Fixed& operator=(const Fixed &reference);
	~Fixed();
	int	getRawBits( void ) const; // const gibt an, dass sie function keine member variablen aendert
	void setRawBits( int const raw );
};
