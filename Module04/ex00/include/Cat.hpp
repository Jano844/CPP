

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &reference);
	~Cat();

	Cat &operator=(const Cat &reference);

	void makeSound() const;
};
