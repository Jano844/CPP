
#include "../include/Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	this->fixed_point = 0;
}

Fixed::Fixed(const Fixed &reference) { // gets reference to a other object gets its value and stets 
	std::cout << "Copy constructor called\n"; // the same value for its fixed_point
	int	temp = reference.getRawBits();
	std::cout << "temp: " << temp << std::endl;
	setRawBits(temp);
}

Fixed& Fixed::operator=( const Fixed &reference ) { // gets reference to a other object
	std::cout << "Copy assignment operator called\n";
	if (this != &reference) // if this new object is not the same as the one it got
		this->fixed_point = reference.getRawBits(); // the fixed_point gets copied
	return *this;	// return this new object
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called\n";
	return (this->fixed_point);
}

void	Fixed::setRawBits( int const raw ) {
	this->fixed_point = raw;
}