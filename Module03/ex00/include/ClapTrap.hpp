

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
	ClapTrap(const ClapTrap &reference);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap &reference);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
