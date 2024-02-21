


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

Dog::Dog(const Dog &reference) : Animal(reference) {
	std::cout << "Dog copy constructor called\n";
	*this = reference;
}

Dog &Dog::operator=(const Dog &reference) {
	std::cout << "Dog assignation operator called\n";
	this->type = reference.type;
	return *this;
}