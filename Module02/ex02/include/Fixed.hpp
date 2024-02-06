

#pragma once

#include <iostream>

class Fixed
{
private:
	int					fixed_point;
	static const int	const_number = 8;
public:
	// constructors
	Fixed();
	Fixed(const int int_number);
	Fixed(const float float_number);
	Fixed(const Fixed &reference);
	Fixed& operator=(const Fixed &reference);
	~Fixed();

	// member functions
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);

	Fixed	operator+(const Fixed &reference) const;
	Fixed	operator-(const Fixed &reference) const;
	Fixed	operator/(const Fixed &reference) const;
	Fixed	operator*(const Fixed &reference) const;

	bool	operator>(const Fixed &reference) const;
	bool	operator>=(const Fixed &reference) const;
	bool	operator<(const Fixed &reference) const;
	bool	operator<=(const Fixed &reference) const;
	bool	operator==(const Fixed &reference) const;
	bool	operator!=(const Fixed &reference) const;

	static const Fixed& min(const Fixed &reference1, const Fixed &reference2);
	static const Fixed& max(const Fixed &reference1, const Fixed &reference2);
	
	static Fixed& min(Fixed &reference1, Fixed &reference2);
	static Fixed& max(Fixed &reference1, Fixed &reference2);

	friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};
