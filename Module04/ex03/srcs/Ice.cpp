

#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice(Ice const &other) : AMateria(other) {
	std::cout << "Ice default constructor" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destructor" << std::endl;
}

Ice &Ice::operator=(Ice const &other) {
	std::cout << "Ice assignation operator" << std::endl;
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}

AMateria *Ice::clone() const {
	std::cout << "Ice clone" << std::endl;
	return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots a ice bolt at " << target.getName() << " *" << std::endl;
}