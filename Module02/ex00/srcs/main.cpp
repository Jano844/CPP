

#include "../include/Fixed.hpp"

// int main( void ) {
// 	Fixed a;
// 	Fixed b( a );
// 	Fixed c;
// 	c = b;

// 	std::cout << a.getRawBits() << std::endl;
// 	std::cout << b.getRawBits() << std::endl;
// 	std::cout << c.getRawBits() << std::endl;
// 	return (0);
// }



int main( void ) {
	Fixed a;

	a.setRawBits( 10 );

	Fixed b( a );
	Fixed c;

	std::cout << std::endl;
	std::cout << c.getRawBits() << std::endl;
	c = b;
	std::cout << c.getRawBits() << std::endl;
	std::cout << std::endl;



	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	return (0);
}