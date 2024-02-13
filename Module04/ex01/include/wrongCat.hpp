

#pragma once

#include "wrongAnimal.hpp"

class wrongCat : public wrongAnimal
{
public:
	wrongCat();
	~wrongCat();

	void makeSound() const;
};
