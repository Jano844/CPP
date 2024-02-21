
#include "../include/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->hit_points = 100;
	this->energy = 100;
	this->attac_damage = 30;
	std::cout << "FragTrap Default Constructor for " << this->str << " called" << std::endl;
}

FragTrap::FragTrap(std::string string) {
	ClapTrap::set_str(string);
	ClapTrap::set_attac_damage(30);
	ClapTrap::set_energy(100);
	ClapTrap::set_hit_points(100);
	std::cout << "FragTrap " << string << " constructor called\n";
}

FragTrap::FragTrap(const FragTrap& reference): ClapTrap(reference.get_str()) {
	std::cout << "FragTrap " << ClapTrap::get_str() << " copy constructor called\n";
	*this = reference;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << ClapTrap::get_str() << " destructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& reference) {
	std::cout << "FragTrap " << ClapTrap::get_str() << " assignation operator called\n";
	this->str = reference.get_str();
	this->hit_points = reference.get_hit_points();
	this->energy = reference.get_energy();
	this->attac_damage = reference.get_attac_damage();
	return *this;
}

void	FragTrap::highFivesGuys() {
	if (ClapTrap::get_hit_points() <= 0) {
		std::cout << "FragTrap " << ClapTrap::get_str() << " is dead\n";
		return ;
	}
	std::cout << "FragTrap " << ClapTrap::get_str() << " requests a high five\n";
}