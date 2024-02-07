
#include "../include/FragTrap.hpp"

FragTrap::FragTrap(std::string string): ClapTrap(string) {
	set_attac_damage(30);
	set_energy(100);
	set_hit_points(100);
	std::cout << "FragTrap " << string << " constructor called\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << get_str() << " destructor called\n";
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << get_str() << " requests a high five\n";
}