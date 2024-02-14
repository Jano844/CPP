

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Brain;

class Cat : public Animal
{
public:
	Cat();
	~Cat();

	void makeSound() const;
	 void printIdears() const;
	 void set_ideas(int start, int end, std::string input) const;
private:
	Brain* brain;
};
