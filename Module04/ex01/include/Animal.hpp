

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

	// getter setter
	std::string getType() const;
	void setType(std::string type);
protected:
	std::string type;
};
