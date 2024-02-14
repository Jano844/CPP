

#pragma once

#include <iostream>

class Animal
{
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &reference);
	virtual ~Animal();

	Animal &operator=(const Animal &reference);

	virtual void makeSound() const;
	void test() const;

	virtual void printIdears() const;
	virtual void set_ideas(int start, int end, std::string input) const;

	// getter setter
	std::string getType() const;
	void setType(std::string type);
protected:
	std::string type;
};
