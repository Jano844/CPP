

#pragma once

#include <iostream>

class wrongAnimal
{
public:
	wrongAnimal();
	wrongAnimal(std::string type);
	wrongAnimal(const wrongAnimal &reference);
	virtual ~wrongAnimal();

	wrongAnimal &operator=(const wrongAnimal &reference);

	virtual void makeSound() const;
	void test() const;
protected:
	std::string type;
};
