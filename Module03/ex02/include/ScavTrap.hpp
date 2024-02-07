

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap();
public:
	ScavTrap(std::string str);
	~ScavTrap();
	virtual void attack(const std::string& target);
	void guardGate();
};