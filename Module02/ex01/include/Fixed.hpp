

#pragma once

#include <iostream>

class Fixed
{
private:
	int					fixed_point;
	static const int	const_number = 8;
public:
	// constructors
	Fixed(/* args */);
	Fixed(const int int_number);
	Fixed(const float float_number);
	Fixed(const Fixed &reference);
	Fixed& operator=(const Fixed &reference);
	~Fixed();

	// member functions
	int		getRawBits( void ) const; // const gibt an, dass sie function keine member variablen aendert
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
