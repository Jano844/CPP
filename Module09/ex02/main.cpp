

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2) {
		std::cout << "Error: no arguments\n";
		return 1;
	}
	Pmerge p;
	p.check_fill_containers(argv);
	return 0;
}