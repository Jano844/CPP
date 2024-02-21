



#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Brain;

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &reference);
	~Dog();
	Dog &operator=(const Dog &reference);

	void makeSound() const;
	void printIdears() const;
	void set_ideas(int start, int end, std::string input) const;
private:
	Brain* brain;
};
