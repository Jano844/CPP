
#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {
	std::cout << name << " gets created with " << weapon.getType() << std::endl;
}

HumanA::~HumanA() {
	std::cout << this->name << " gets destroyed" << std::endl;
}

void HumanA::attack() {
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}