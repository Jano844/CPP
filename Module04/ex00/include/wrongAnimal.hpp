

#pragma once

#include <iostream>

class wrongAnimal
{
public:
	wrongAnimal();
	wrongAnimal(std::string type);
	virtual ~wrongAnimal();

	virtual void makeSound() const;
	void test() const;
protected:
	std::string type;
};
