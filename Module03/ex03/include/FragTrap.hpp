

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
public:
	FragTrap();
	FragTrap(std::string str);
	FragTrap(const FragTrap &reference);
	~FragTrap();
	FragTrap &operator=(const FragTrap &reference);

	void highFivesGuys(void);
};