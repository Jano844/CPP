
#include "../include/Weapon.hpp"

Weapon::Weapon(std::string type) : weapon(type) {
}

std::string &Weapon::getType(void) {
	return (this->weapon);
}

void Weapon::setType(const std::string &type) {
	this->weapon = type;
}
