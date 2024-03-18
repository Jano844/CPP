
#include <iostream>
#include <limits>
#include <iomanip>
#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "wrong number of arguments\n";
		return 1;
	}
	ScalarConverter::convert(argv[1]);
	// float f = 123123123.123123124;

	// std::cout << std::fixed << f << std::endl;
	return 0;
}