

#include "../include/DiamondTrap.hpp"


int	main()
{
	DiamondTrap jan("Magier");

	jan.whoAmI();

	jan.attack("builderhut");
	jan.takeDamage(1000);
	jan.beRepaired(1000);
	jan.whoAmI();
	return (0);
}