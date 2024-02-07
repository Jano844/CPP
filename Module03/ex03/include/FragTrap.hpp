
#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	FragTrap();
public:
	FragTrap(std::string str);
	~FragTrap();
	void highFivesGuys(void);
};