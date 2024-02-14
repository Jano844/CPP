

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

Cat::~Cat() {
	std::cout << "Cat destructor called\n";
	delete this->brain;
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
