
#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragtTrap : public ClapTrap
{
private:
	FragtTrap();
public:
	FragtTrap(std::string str);
	~FragtTrap();
	void highFivesGuys(void);
};