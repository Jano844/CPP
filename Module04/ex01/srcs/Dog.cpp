
#include "../include/Dog.hpp"
#include "../include/Brain.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << this->type << " default constructor called\n";
	try {
		this->brain = new Brain();
	}
	catch (const std::bad_alloc& bad_alloc) {
		std::cout << "Memory AlloDogion is failed : " << bad_alloc.what() << std::endl;
	}
}

Dog::Dog(const Dog &reference)  : Animal(reference) {
	std::cout << "Dog copy constructor called\n";
	*this = reference;
}

Dog::~Dog() {
	std::cout << "Dog destructor called\n";
	delete this->brain;
}

Dog& Dog::operator=(const Dog& reference)
{
	std::cout << "Dog assignation operator called\n";
	if (this != &reference)
	{
		this->type = reference.type;
		this->brain = new Brain( *reference.brain );
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof\n";
}

void Dog::set_ideas(int start, int end, std::string input) const {
	while (start < end) {
		this->brain->set_idea(start, input);
		start++;
	}

}

void Dog::printIdears() const {
	for (int i = 0; i < 100; i++) {
		std::cout << this->brain->get_idea(i) << std::endl;
	}
}
