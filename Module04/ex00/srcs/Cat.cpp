

#include "../include/Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << this->type << " default constructor called\n";
}

Cat::~Cat() {
	std::cout << "Cat destructor called\n";
}


Cat::Cat(const Cat &reference) : Animal(reference) {
	std::cout << "Cat copy constructor called\n";
	*this = reference;
}

void Cat::makeSound() const {
	std::cout << "Miau\n";
}

Cat &Cat::operator=(const Cat &reference) {
	std::cout << "Cat assignation operator called\n";
	this->type = reference.type;
	return *this;
}