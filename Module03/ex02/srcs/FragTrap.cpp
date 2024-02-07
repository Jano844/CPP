
#include "../include/FragTrap.hpp"

FragtTrap::FragtTrap(std::string string): ClapTrap(string) {
	set_attac_damage(30);
	set_energy(100);
	set_hit_points(100);
	std::cout << "FragTrap " << string << " constructor called\n";
}

FragtTrap::~FragtTrap() {
	std::cout << "FragTrap " << get_str() << " destructor called\n";
}

void	FragtTrap::highFivesGuys() {
	std::cout << "FragTrap " << get_str() << " requests a high five\n";
}