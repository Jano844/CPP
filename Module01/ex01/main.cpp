
#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int	size = 3;
	Zombie *horde = zombieHorde(size, "Wave");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;

	std::cout << "\n-----------------------\n\n";

	size = 5;
	Zombie *more = zombieHorde(size, "last Wave");
	for (int i = 0; i < size; i++)
		more[i].announce();
	delete [] more;
}