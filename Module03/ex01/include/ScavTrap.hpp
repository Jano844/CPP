

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap();
public:
	ScavTrap(std::string str);
	ScavTrap(const ScavTrap &reference);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &reference);

	void attack(const std::string& target);
	void guardGate();
};