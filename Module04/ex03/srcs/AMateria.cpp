
#include "../include/AMateria.hpp"

AMateria::AMateria() : _type("default") {
	std::cout << "AMateria Default Constructor" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
	std::cout << "AMateria assign type Constructor" << std::endl;
}

AMateria::AMateria(AMateria const &other) {
	std::cout << "AMateria Copy Constructor" << std::endl;
	*this = other;
}

AMateria::~AMateria() {
	std::cout << "AMateria Destructor" << std::endl;
}

std::string const &AMateria::getType() const {
	return (_type);
}


void AMateria::use(ICharacter& target) {
}