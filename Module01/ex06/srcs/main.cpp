

#include "../include/Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (0);
	}
	Harl harl;
	harl.harlfilter(argv[1]);
	return (0);
}