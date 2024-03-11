
#include "whatever.hpp"


// int	main()
// {
// 	// int a = 5, b = 10;
// 	double a = 2.71828, b = 3.1415;
// 	// char a = 'a', b = 'z';
// 	std::cout << min(a, b) << " is the smaller one" << std::endl;
// 	std::cout << max(a, b) << " is the bigger one" << std::endl;
// 	std::cout << std::endl;
// 	std::cout << "a: " << a << ", b: " << b << std::endl;
// 	swap(a, b);
// 	std::cout << "a: " << a << ", b: " << b << std::endl;
// 	return 0;
// }

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}