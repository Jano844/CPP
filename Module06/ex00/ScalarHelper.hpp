

#pragma once

#include <iostream>
#include <cmath>

class ScalarHelper
{
private:
	ScalarHelper();
	ScalarHelper(ScalarHelper const& other);
	ScalarHelper& operator=(ScalarHelper const& other);
	std::string literal;
	bool	isFloat;
	bool	isInt;
	bool	isMinus;
	bool	isPlus;
	void	init_variables();
	void	print_pseudo(std::string pseudo, int i);
	void	print_number(double number);
	double	ft_stod(std::string str);
public:
	ScalarHelper(std::string literal);
	~ScalarHelper();
};