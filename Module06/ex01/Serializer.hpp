

#pragma once

#include <iostream>
#include "Data.hpp"

class Data;

class Scalarizer
{
private:
	Scalarizer();
	Scalarizer(Scalarizer const &other);
	~Scalarizer();
	Scalarizer& operator=(Scalarizer const &other);
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};
