

#include "../include/ClapTrap.hpp"


int	main()
{
	ClapTrap jan("Magier");

	ClapTrap bob;
	bob = jan;


	bob.attack("an Enemy");
	jan.attack("Shy Guy");

	jan.takeDamage(10);
	jan.attack("Shy Guy");

	bob.beRepaired(5);
	return (0);
}