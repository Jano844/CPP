

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string str;
public:
	DiamondTrap(std::string str);
	~DiamondTrap();

	using	ScavTrap::attack;
	void	whoAmI( void );
};
