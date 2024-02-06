
#include "../include/Fixed.hpp"

Fixed::Fixed() {
	// std::cout << "Default constructor called\n";
	this->fixed_point = 0;
}

Fixed::Fixed(const int int_number) {
	// std::cout << "Int constructor called\n";
	this->fixed_point = static_cast<int>(int_number << this->const_number); // cast braucht man nicht aber besser mit
}

Fixed::Fixed(const float float_number) {
	// std::cout << "Float constructor called\n";
	this->fixed_point = static_cast<int>(float_number * (1 << this->const_number)); // (int) -> C = static_cast<int> -> CPP
}

Fixed::Fixed(const Fixed &reference) { // gets reference to a other object gets its value and stets 
	// std::cout << "Copy constructor called\n"; // the same value for its fixed_point
	int	temp = reference.getRawBits();
	setRawBits(temp);
}

Fixed& Fixed::operator=( const Fixed &reference ) { // gets reference to a other object
	// std::cout << "Copy assignment operator called\n";
	if (this != &reference) // if this new object is not the same as the one it got
		this->fixed_point = reference.getRawBits(); // the fixed_point gets copied
	return *this;	// return this new object
}

Fixed::~Fixed() {
	// std::cout << "Destructor called\n";
}

int	Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called\n";
	return (this->fixed_point);
}

void	Fixed::setRawBits( int const raw ) {
	this->fixed_point = raw;
}

float	Fixed::toFloat() const {
	float temp = static_cast<float>(this->fixed_point) / (1 << this->const_number);
	return (temp);
}

int		Fixed::toInt( void ) const {
	int temp = static_cast<int>(this->fixed_point >> this->const_number);
	return (temp);
}

// operating overload so if std::cout << gets  of an object is getting called, this function returns the right answer
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) { 
	os << fixed.toFloat();
	return os;
}


// operating overloaders

// ++a returns reference to the original object
Fixed&	Fixed::operator++() {
	++fixed_point;
	return *this;
}
// a++
Fixed	Fixed::operator++(int) {
	Fixed temp(*this);
	this->fixed_point += 1;
	return (temp);
}

// same for --a
Fixed&	Fixed::operator--() {
	--fixed_point;
	return *this;
}
// a--
Fixed	Fixed::operator--(int) {
	Fixed temp(*this);
	this->fixed_point -= 1;
	return (temp);
}

// + - / *
// gets a reference to an object, creates a new object and takes a float, converts the fixedpoint of the object and the fixedpoint the reference it got to floats and adds them up
Fixed	Fixed::operator+(const Fixed &reference) const {
	return Fixed( this->toFloat() + reference.toFloat() );
}
Fixed	Fixed::operator-(const Fixed &reference) const {
	return Fixed( this->toFloat() - reference.toFloat() );
}
Fixed	Fixed::operator/(const Fixed &reference) const {
	return Fixed( this->toFloat() / reference.toFloat() );
}
Fixed	Fixed::operator*(const Fixed &reference) const {
	return Fixed( this->toFloat() * reference.toFloat() );
}


// compare the 2 fixed numbers, return true if the statement ist true, else return false
bool	Fixed::operator>(const Fixed &reference) const {
	if (this->getRawBits() > reference.getRawBits())
		return true;
	return false;
}
bool	Fixed::operator>=(const Fixed &reference) const {
	if (this->getRawBits() >= reference.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<(const Fixed &reference) const {
	if (this->getRawBits() < reference.getRawBits())
		return true;
	return false;
}
bool	Fixed::operator<=(const Fixed &reference) const {
	if (this->getRawBits() <= reference.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==(const Fixed &reference) const {
	if (this->getRawBits() == reference.getRawBits())
		return true;
	return false;
}
bool	Fixed::operator!=(const Fixed &reference) const {
	if (this->getRawBits() != reference.getRawBits())
		return true;
	return false;
}

// min - max
const Fixed& Fixed::min(const Fixed &reference1, const Fixed &reference2) {
	if (reference1 < reference2)
		return reference1;
	return reference2;
}
const Fixed& Fixed::max(const Fixed &reference1, const Fixed &reference2) {
	if (reference1 > reference2)
		return reference1;
	return reference2;
}

Fixed& Fixed::min(Fixed &reference1, Fixed &reference2) {
	if (reference1 < reference2)
		return reference1;
	return reference2;
}

Fixed& Fixed::max(Fixed &reference1, Fixed &reference2) {
	if (reference1 > reference2)
		return reference1;
	return reference2;
}