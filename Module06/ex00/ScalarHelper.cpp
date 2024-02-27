

#include "ScalarHelper.hpp"

ScalarHelper::ScalarHelper(std::string literal) : literal(literal) 
{
	init_variables();
	std::string pseudo[8] = {"inff", "-inff", "+inff", "nanf", "-inf", "+inf", "inf", "nan"};
	for (int i = 0; i < 8; i++)
	{
		if (pseudo[i] == this->literal) {
			print_pseudo(pseudo[i], i);
			return ;
		}
	}
	
}

ScalarHelper::~ScalarHelper() {}


void	ScalarHelper::init_variables() {
	this->isFloat = false;
	this->isDouble = false;
	this->isChar = false;
	this->isInt = false;
	int	i = 0;
	int j = this->literal.size() - 1;
	while (std::isspace(this->literal[i]))
		i++;
	while (j != -1 && std::isspace(this->literal[j]) && j != 0)
		j--;
	this->literal = this->literal.substr(i, j - i + 1);
}

void	ScalarHelper::print_pseudo(std::string pseudo, int i) {
	std::string floa;
	std::string doub;
	if (i < 4) {
		floa = pseudo;
		doub = floa.substr(0, pseudo.size() -1);
	}
	else {
		doub = pseudo;
		floa = doub + "f";
	}
	std::cout<< "char: " << "impossible" << std::endl;
	std::cout<< "int: " << "impossible" << std::endl;
	std::cout<< "float: " << floa << std::endl;
	std::cout<< "double: " << doub << std::endl;
}