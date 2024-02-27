

#pragma once

#include <iostream>

class ScalarHelper
{
private:
	ScalarHelper();
	ScalarHelper(ScalarHelper const& other);
	ScalarHelper& operator=(ScalarHelper const& other);
	std::string literal;
	bool	isFloat;
	bool	isDouble;
	bool	isChar;
	bool	isInt;
	void	init_variables();
	void	print_pseudo(std::string pseudo, int i);
public:
	ScalarHelper(std::string literal);
	~ScalarHelper();
};