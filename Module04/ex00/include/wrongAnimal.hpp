

#pragma once

#include <iostream>

class wrongAnimal
{
public:
	wrongAnimal();
	wrongAnimal(const wrongAnimal &reference);
	wrongAnimal(std::string type);
	virtual ~wrongAnimal();

	wrongAnimal &operator=(const wrongAnimal &reference);

	void makeSound() const;
	void test() const;

	// getter setter
	std::string getType() const;
	void setType(std::string type);
protected:
	std::string type;
};
