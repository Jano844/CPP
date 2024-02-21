

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"


int	main()
{
	ScavTrap test("Magier");

	ScavTrap test2("helloWorld");
	test2 = test;

	test.attack("Warrior");
	test2.attack("Warrior");


	test.takeDamage(100);
	test.guardGate();

	test2.guardGate();
	return (0);
}