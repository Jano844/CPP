

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(): str("ClapTrap"), hit_points(10), energy(10), attac_damage(0) {
	std::cout << "ClapTrap " << this->str << " constructor called\n";
}

ClapTrap::ClapTrap(std::string str): str(str), hit_points(10), energy(10), attac_damage(0) {
	std::cout << "ClapTrap " << this->str << " constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &reference) {
	std::cout << "Copy constructor called\n";
	*this = reference;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->str << " Destructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &reference) {
	std::cout << "Assignation operator called\n";
	this->str = reference.str;
	this->hit_points = reference.hit_points;
	this->energy = reference.energy;
	this->attac_damage = reference.attac_damage;
	return *this;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->hit_points <= 0) {
		std::cout << "ClapTrap " << this->str << " cant attack, because hes dead\n";
		return ;
	}
	if (this->energy == 0)
		std::cout << "ClapTrap " << this->str << " cant attack, because hes out of energy\n";
	else {
		std::cout << "ClapTrap " << this->str << " attacks "<< target << ", causing " << this->attac_damage << " points of damage!\n";
		this->energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hit_points <= 0) {
		std::cout << "ClapTrap " << this->str << " cant get attacked, because hes dead\n";
		return ;
	}
	this->hit_points -= amount;
	std::cout << "ClapTrap " << this->str << " gets hit and takes " << amount << " points of damage!\n";
	if (this->hit_points <= 0)
		std::cout << this->str << " is dead\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hit_points <= 0) {
		std::cout << "ClapTrap " << this->str << " cant repair, because hes dead\n";
		return ;
	}
	if (this->energy == 0)
		std::cout << "ClapTrap" << this->str << "cant repair, because hes out of energy\n";
	else {
		std::cout << "ClapTrap " << this->str << " repairs "<< amount << "\n";
		this->hit_points += amount;
		this->energy--;
	}
}

// getter setter methods
void	ClapTrap::set_hit_points(int hit_points) {
	this->hit_points = hit_points;
}

void	ClapTrap::set_energy(int energy) {
	this->energy = energy;
}

void	ClapTrap::set_attac_damage(int attac_damage) {
	this->attac_damage = attac_damage;
}

void	ClapTrap::set_str(std::string str) {
	this->str = str;
}

int		ClapTrap::get_hit_points() const {
	return this->hit_points;
}

int		ClapTrap::get_energy() const{
	return this->energy;
}

int		ClapTrap::get_attac_damage() const{
	return this->attac_damage;
}

std::string	ClapTrap::get_str() const {
	return this->str;
}