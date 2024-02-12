

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
