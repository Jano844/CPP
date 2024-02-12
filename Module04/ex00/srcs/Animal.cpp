
#include "../include/Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << this->type << " default constructor called\n";
}

Animal::Animal(std::string type) : type(type) {
	std::cout << this->type << " type constructor called\n";
}

Animal::~Animal() {
	std::cout << "Animal destructor called\n";
}

void Animal::makeSound() const {
	std::cout << this->type << " sound\n";
}

void Animal::test() const{
	std::cout << "test\n";
}

// getter setter

std::string Animal::getType() const {
	return this->type;
}

void Animal::setType(std::string type) {
	this->type = type;
}
