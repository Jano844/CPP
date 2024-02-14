

#pragma once

#include <iostream>

class ClapTrap
{
protected:
	std::string	str;
	int	hit_points;
	int	energy;
	int	attac_damage;
public:
	ClapTrap(std::string str);
	ClapTrap(const ClapTrap& reference);
	~ClapTrap();

	ClapTrap& operator=(const ClapTrap& reference);

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void	set_hit_points(int hit_points);
	void	set_energy(int energy);
	void	set_attac_damage(int attac_damage);
	int		get_hit_points();
	int		get_energy();
	int		get_attac_damage();
	void	set_name(std::string str);
	std::string	get_str();
};
