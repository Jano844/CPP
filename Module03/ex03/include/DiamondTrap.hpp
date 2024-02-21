

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap;
class ScavTrap;

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string str;
public:
	DiamondTrap(std::string str);
	virtual ~DiamondTrap();
	DiamondTrap &operator=(const DiamondTrap &reference);

	using	ScavTrap::attack;
	void	whoAmI( void );
};
