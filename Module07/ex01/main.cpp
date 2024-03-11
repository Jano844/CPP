
#include "iter.hpp"


int	main()
{
	char array[] = {'a', 'b', 'c', 'd'};
	// int array[] = {1, 2, 3, 4, 5};
	// std::string array[] = {"HelloWorld", "My name is Jan", "abcdef"};
	// double array[] = {1.6180, 2.71828, 3.1415};

	::iter(array, (sizeof(array) / sizeof(array[0])), ::print);
	return 0;
}