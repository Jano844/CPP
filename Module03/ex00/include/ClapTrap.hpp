

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
	ClapTrap();
	ClapTrap(std::string str);
	ClapTrap(const ClapTrap &reference);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap &reference);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void	set_hit_points(int hit_points);
	void	set_energy(int energy);
	void	set_attac_damage(int attac_damage);
	int		get_hit_points() const;
	int		get_energy() const;
	int		get_attac_damage() const;
	std::string	get_str() const;
};
