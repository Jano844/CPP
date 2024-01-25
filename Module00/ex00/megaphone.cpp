#include <iostream>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << std::endl;
		return (0);
	}
	for (int i = 0; i < argc; i++)
		std::cout << argv[i];
	std::cout << std::endl;
	return (0);
}
