

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str): str(str), hit_points(10), energy(10), attac_damage(0) {
	std::cout << "Asign name constructor called\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called\n";
}

void	ClapTrap::attack(const std::string& target) {
	if (this->energy == 0)
		std::cout << "ClapTrap " << this->str << " cant attack, because hes out of energy\n";
	else {
		std::cout << "ClapTrap " << this->str << " attacks "<< target << ", causing " << this->attac_damage << " points of damage!\n";
		this->energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hit_points -= amount;
	std::cout << "ClapTrap " << this->str << " gets hit and takes " << amount << " points of damage!\n";
	if (this->hit_points <= 0)
		std::cout << this->str << " is dead\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energy == 0)
		std::cout << "ClapTrap" << this->str << "cant repair, because hes out of energy\n";
	else {
		std::cout << "ClapTrap " << this->str << " repairs "<< amount << "\n";
		this->hit_points += amount;
		this->energy--;
	}
}