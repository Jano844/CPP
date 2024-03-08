

#pragma once

#include <iostream>
#include <cstddef>
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
	static size_t serialize(Data* ptr);
	static Data* deserialize(size_t raw);
};
