

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	ScavTrap();
public:
	ScavTrap(std::string str);
	~ScavTrap();
	virtual void attack(const std::string& target);
	void guardGate();
};