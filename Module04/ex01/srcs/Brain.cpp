

#include "../include/Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called\n";
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "idea";
	}
}

Brain::~Brain() {
	std::cout << "Brain destructor called\n";
}

void	Brain::set_idea(int i, std::string input) {
	this->ideas[i] = input;
}

std::string Brain::get_idea(int i) {
	return (this->ideas[i]);
}
