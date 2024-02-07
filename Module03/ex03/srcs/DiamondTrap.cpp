
#include	"../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string str):  ClapTrap(str), ScavTrap(str), FragTrap(str) {
	this->str = str;
	ClapTrap::set_name(str + "_clap_name");

	FragTrap::hit_points = 100;
	ScavTrap::energy = 50;
	FragTrap::attac_damage = 30;
	std::cout << "DiamondTrap " << this->str << " constructor called!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->str << " destructor called!" << std::endl;
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "My name is " << this->str << " and my ClapTrap name is " << get_str() << std::endl;
}