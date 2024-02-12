

#include "../include/Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << this->type << " default constructor called\n";
}

Cat::~Cat() {
	std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const {
	std::cout << "Miau\n";
}
