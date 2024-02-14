
#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string string): ClapTrap(string) {
	set_attac_damage(20);
	set_energy(50);
	set_hit_points(100);
	std::cout << "ScavTrap " << string << " constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& reference): ClapTrap(reference.get_str()) {
	std::cout << "ScavTrap " << get_str() << " copy constructor called\n";
	*this = reference;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << get_str() << " destructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& reference) {
	std::cout << "ScavTrap " << get_str() << " assignation operator called\n";
	this->str = reference.get_str();
	this->hit_points = reference.get_hit_points();
	this->energy = reference.get_energy();
	this->attac_damage = reference.get_attac_damage();
	return *this;
}

void	ScavTrap::attack(const std::string& target) {
	if (get_energy() == 0)
		std::cout << "ScavTrap " << get_str() << " cant attack, because hes out of energy\n";
	else {
		std::cout << "ScavTrap " << get_str() << " attacks "<< target << ", causing " << get_attac_damage() << " points of damage!\n";
		set_energy(get_energy() - 1);
	}
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << get_str() << " is now in Gate keeper mode!\n";
}