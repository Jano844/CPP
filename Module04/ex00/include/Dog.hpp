

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &reference);
	~Dog();

	Dog &operator=(const Dog &reference);

	void makeSound() const;
};
