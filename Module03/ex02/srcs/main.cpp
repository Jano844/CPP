

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"


int	main()
{
	FragtTrap jan("Magier");
	FragtTrap evaluator("42");

	evaluator.beRepaired(100);
	jan.highFivesGuys();
	jan.takeDamage(1000);
	jan.highFivesGuys();

	std::cout << "-------------" << std::endl;

	ScavTrap test("Magier");

	test.guardGate();
	std::cout << "-------------" << std::endl;
	return (0);
}