
#include "../include/FragTrap.hpp"

FragtTrap::FragtTrap(std::string string): ClapTrap(string) {
	set_attac_damage(30);
	set_energy(100);
	set_hit_points(100);
	std::cout << "FragTrap " << string << " constructor called\n";
}

FragtTrap::FragtTrap(const FragtTrap& reference): ClapTrap(reference.get_str()) {
	std::cout << "FragTrap " << get_str() << " copy constructor called\n";
	*this = reference;
}

FragtTrap::~FragtTrap() {
	std::cout << "FragTrap " << get_str() << " destructor called\n";
}

FragtTrap& FragtTrap::operator=(const FragtTrap& reference) {
	std::cout << "FragTrap " << get_str() << " assignation operator called\n";
	this->str = reference.get_str();
	this->hit_points = reference.get_hit_points();
	this->energy = reference.get_energy();
	this->attac_damage = reference.get_attac_damage();
	return *this;
}

void	FragtTrap::highFivesGuys() {
	std::cout << "FragTrap " << get_str() << " requests a high five\n";
}