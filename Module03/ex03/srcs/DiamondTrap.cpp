
#include	"../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap")
{
	this->str = name;
	this->hit_points = FragTrap::hit_points;
	this->energy = ScavTrap::energy;
	this->attac_damage = FragTrap::attac_damage;
	std::cout << "DiamondTrap Constructor for the name " << this->str << " called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &reference)
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	this->str = reference.str + "_clap_trap";
	this->hit_points = reference.hit_points;
	this->energy = reference.energy;
	this->attac_damage = reference.attac_damage;
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->str << " destructor called!" << std::endl;
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "My name is " << this->str << " and my ClapTrap name is " << get_str() << std::endl;
}