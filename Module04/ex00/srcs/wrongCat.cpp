

#include "../include/wrongCat.hpp"

wrongCat::wrongCat() {
	this->type = "wrongCat";
	std::cout << this->type << " default constructor called\n";
}

wrongCat::~wrongCat() {
	std::cout << "wrongCat destructor called\n";
}


wrongCat::wrongCat(const wrongCat &reference) : wrongAnimal(reference) {
	std::cout << "wrongCat copy constructor called\n";
	*this = reference;
}

void wrongCat::makeSound() const {
	std::cout << "uaiM\n";
}

wrongCat &wrongCat::operator=(const wrongCat &reference) {
	std::cout << "wrongCat assignation operator called\n";
	this->type = reference.type;
	return *this;
}