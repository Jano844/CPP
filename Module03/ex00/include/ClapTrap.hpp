

#pragma once


#include <iostream>

class ClapTrap
{
private:
	std::string	str;
	int	hit_points;
	int	energy;
	int	attac_damage;
public:
	ClapTrap(std::string str);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
