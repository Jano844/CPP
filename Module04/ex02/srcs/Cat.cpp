

#include "../include/Cat.hpp"
#include "../include/Brain.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << this->type << " default constructor called\n";
	try {
		this->brain = new Brain();
	}
	catch (const std::bad_alloc& bad_alloc) {
		std::cout << "Memory Allocation is failed : " << bad_alloc.what() << std::endl;
	}
}

Cat::Cat(const Cat &reference) : Animal(reference){
	std::cout << "Cat copy constructor called\n";
	*this = reference;
}

Cat::~Cat() {
	std::cout << "Cat destructor called\n";
	delete this->brain;
}

Cat& Cat::operator=(const Cat& reference)
{
	std::cout << "Cat assignation operator called\n";
	if (this != &reference)
	{
		this->type = reference.type;
		this->brain = new Brain(*reference.brain);
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Miau\n";
}

void Cat::set_ideas(int start, int end, std::string input) const {
	while (start < end) {
		this->brain->set_idea(start, input);
		start++;
	}

}

void Cat::printIdears() const {
	for (int i = 0; i < 100; i++) {
		std::cout << this->brain->get_idea(i) << std::endl;
	}
}
