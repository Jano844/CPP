

#pragma once 

#include <iostream>

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(ScalarConverter const& other);
	~ScalarConverter();
	ScalarConverter& operator=(ScalarConverter const& other);
public:
	void static convert(std::string literal);
};