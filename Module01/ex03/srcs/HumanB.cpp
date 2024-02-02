
#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name): name(name) {
	std::cout << name << " created with no weapon" << std::endl;
}

HumanB::~HumanB() {
	std::cout << this->name << " gets destroyed" << std::endl;
}

void HumanB::attack() {
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	std::cout << this->name << " gets a new weapon: " << weapon.getType() << std::endl;
	this->weapon = &weapon;
}