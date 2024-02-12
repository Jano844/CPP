


#include "../include/Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << this->type << " default constructor called\n";
}

Dog::~Dog() {
	std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const {
	std::cout << "Wooof\n";
}
