

#include "../include/wrongAnimal.hpp"

wrongAnimal::wrongAnimal() : type("wrongAnimal") {
	std::cout << this->type << " default constructor called\n";
}

wrongAnimal::wrongAnimal(std::string type) : type(type) {
	std::cout << this->type << " type constructor called\n";
}

wrongAnimal::wrongAnimal(const wrongAnimal &reference) {
	std::cout << "wrongAnimal copy constructor called\n";
	*this = reference;
}

wrongAnimal::~wrongAnimal() {
	std::cout << "wrongAnimal destructor called\n";
}

wrongAnimal &wrongAnimal::operator=(const wrongAnimal &reference) {
	std::cout << "wrongAnimal assignation operator called\n";
	this->type = reference.type;
	return *this;
}

void wrongAnimal::makeSound() const {
	std::cout << this->type << " sound\n";
}

void wrongAnimal::test() const{
	std::cout << "test\n";
}

// getter setter

std::string wrongAnimal::getType() const {
	return this->type;
}

void wrongAnimal::setType(std::string type) {
	this->type = type;
}
