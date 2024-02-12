

#pragma once

#include <iostream>

class Animal
{
public:
	Animal();
	Animal(std::string type);
	virtual ~Animal();

	virtual void makeSound() const;
	void test() const;
protected:
	std::string type;
};
