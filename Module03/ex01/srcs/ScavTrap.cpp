
#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string string) {
	ClapTrap::set_str(string);
	ClapTrap::set_attac_damage(20);
	ClapTrap::set_energy(50);
	ClapTrap::set_hit_points(100);
	std::cout << "ScavTrap " << string << " constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& reference): ClapTrap(reference.get_str()) {
	std::cout << "ScavTrap " << ClapTrap::get_str() << " copy constructor called\n";
	*this = reference;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << ClapTrap::get_str() << " destructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& reference) {
	std::cout << "ScavTrap " << ClapTrap::get_str() << " assignation operator called\n";
	this->str = reference.get_str();
	this->hit_points = reference.get_hit_points();
	this->energy = reference.get_energy();
	this->attac_damage = reference.get_attac_damage();
	return *this;
}

void	ScavTrap::attack(const std::string& target) {
	if (ClapTrap::get_hit_points() <= 0) {
		std::cout << "ScavTrap " << ClapTrap::get_str() << " cant attack, because hes dead\n";
		return ;
	}
	if (ClapTrap::get_energy() == 0)
		std::cout << "ScavTrap " << ClapTrap::get_str() << " cant attack, because hes out of energy\n";
	else {
		std::cout << "ScavTrap " << ClapTrap::get_str() << " attacks "<< target << ", causing " << ClapTrap::get_attac_damage() << " points of damage!\n";
		ClapTrap::set_energy(ClapTrap::get_energy() - 1);
	}
}

void	ScavTrap::guardGate() {
	if (ClapTrap::get_hit_points() <= 0) {
		std::cout << "ScavTrap " << ClapTrap::get_str() << " cant attack, because hes dead\n";
		return ;
	}
	std::cout << "ScavTrap " << ClapTrap::get_str() << " is now in Gate keeper mode!\n";
}