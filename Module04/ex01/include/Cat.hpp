

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	~Cat();

	void makeSound() const;
	void printIdears();
	void set_ideas(int start, int end, std::string input);
private:
	Brain* brain;
};
