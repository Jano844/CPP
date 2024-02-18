
#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump( std::string name);

int	main(void)
{
	Zombie	*zombie = newZombie("Foo");
	zombie->announce();
	delete zombie;

	randomChump("Jan");

	Zombie	test("Name");
	test.announce();
}