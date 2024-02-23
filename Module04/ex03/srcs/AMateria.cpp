
#include "../include/AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {
	// std::cout << "AMateria assign type Constructor" << std::endl;
}

AMateria::~AMateria() {
	// std::cout << "AMateria Destructor" << std::endl;
}

std::string const &AMateria::getType() const {
	return (_type);
}