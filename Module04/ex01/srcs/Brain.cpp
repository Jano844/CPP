

#include "../include/Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called\n";
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "idea";
	}
}

Brain::Brain(const Brain &reference) {
	std::cout << "Brain copy constructor called\n";
	*this = reference;
}

Brain::~Brain() {
	std::cout << "Brain destructor called\n";
}

Brain &Brain::operator=(const Brain &reference) {
	std::cout << "Brain assignation operator called\n";
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = reference.ideas[i];
	}
	return *this;
}

void	Brain::set_idea(int i, std::string input) {
	this->ideas[i] = input;
}

std::string Brain::get_idea(int i) {
	return (this->ideas[i]);
}
