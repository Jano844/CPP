

#pragma once

#include "wrongAnimal.hpp"

class wrongCat : public wrongAnimal
{
public:
	wrongCat();
	wrongCat(const wrongCat &reference);
	~wrongCat();

	wrongCat &operator=(const wrongCat &reference);

	void makeSound() const;
};
