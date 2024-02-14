
#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragtTrap : public ClapTrap
{
private:
	FragtTrap();
public:
	FragtTrap(std::string str);
	FragtTrap(const FragtTrap &reference);
	~FragtTrap();

	FragtTrap &operator=(const FragtTrap &reference);

	void highFivesGuys(void);
};