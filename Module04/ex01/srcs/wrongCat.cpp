

#include "../include/wrongCat.hpp"

wrongCat::wrongCat() {
	this->type = "wrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

wrongCat::~wrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void wrongCat::makeSound() const {
	std::cout << "uaiM" << std::endl;
}

wrongCat::wrongCat(const wrongCat &reference) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = reference;
}

wrongCat &wrongCat::operator=(const wrongCat &reference) {
	std::cout << "WrongCat assignation operator called" << std::endl;
	this->type = reference.type;
	return *this;
}
