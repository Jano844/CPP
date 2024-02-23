

#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure") {
	// std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(Cure const &other) : AMateria("cure") {
	// std::cout << "Cure Copy constructor" << std::endl;
	*this = other;
}

Cure::~Cure() {
	// std::cout << "Cure destructor" << std::endl;
}

Cure &Cure::operator=(Cure const &other) {
	// std::cout << "Cure assignation operator" << std::endl;
	this->_type = other._type;
	return *this;
}

AMateria *Cure::clone() const {
	// std::cout << "Cure clone" << std::endl;
	return (new Cure(*this));
}


void Cure::use(ICharacter& target) {
	std::cout << " Cures " << target.getName() << " how nice *" << std::endl;
}