
#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string string): ClapTrap(string) {
	set_attac_damage(20);
	set_energy(50);
	set_hit_points(100);
	std::cout << "ScavTrap " << string << " constructor called\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << get_str() << " destructor called\n";
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