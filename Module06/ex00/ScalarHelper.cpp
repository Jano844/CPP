

#include "ScalarHelper.hpp"

ScalarHelper::ScalarHelper(std::string literal) : literal(literal) 
{
	init_variables();
	if (this->literal[0] == '\0') {
		std::cout << "no Input\n";
		return ;
	}
	std::string pseudo[8] = {"inff", "-inff", "+inff", "nanf", "-inf", "+inf", "inf", "nan"};
	for (int i = 0; i < 8; i++)
	{
		if (pseudo[i] == this->literal) {
			print_pseudo(pseudo[i], i);
			return ;
		}
	}
	if (this->literal.size() == 1) {
		if (std::isdigit(this->literal[0]))
			this->literal[0] - '0';
		print_number(static_cast<char>(this->literal[0]));
		return ;
	}

	if (this->literal[this->literal.size() - 1] == 'f') {
		this->isFloat = true;
		this->literal = this->literal.substr(0, this->literal.size() - 1);
	}

	unsigned long i = 0;
	int dot_counter = 0;
	if (this->literal[i] == '+' || this->literal[i] == '-') {
		if (this->literal[i] == '+')
			this->isPlus = 1;
		else
			this->isMinus = 1;
		this->literal = this->literal.substr(1, this->literal.size());
	}

	while (i < this->literal.size())
	{
		if (this->literal[i] == '.')
			dot_counter++;
		if ((!std::isdigit(this->literal[i]) && this->literal[i] != '.') || dot_counter > 1 ||
			this->literal[i] == '+' || this->literal[i] == '-') {
			std::cout << "not a number, a Character or a pseudo ----> wrong input\n";
			return ;
		}
		i++;
	}

	double test;
	if (dot_counter == 0)
		test = static_cast<double>(atoi(this->literal.c_str()));
	else
		test = static_cast<double>(ft_stod(this->literal));
	print_number(test);
}

ScalarHelper::~ScalarHelper() {}


void	ScalarHelper::init_variables() {
	this->isInt = false;
	this->isFloat = false;
	this->isMinus = false;
	this->isPlus = false;
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

double	ScalarHelper::ft_stod(std::string str) {
	double result = 0.0;
	size_t decimalPointPos = str.find('.');
	for (size_t i = 0; i < decimalPointPos; ++i)
		result = result * 10 + (str[i] - '0');
	
	if (decimalPointPos != std::string::npos) {
		double fractionalPart = 0.0;
		int numDigitsAfterDecimal = str.size() - decimalPointPos - 1;
		for (size_t i = decimalPointPos + 1; i < str.size(); ++i) {
			fractionalPart = fractionalPart * 10 + (str[i] - '0');
		}
		result += fractionalPart / pow(10, numDigitsAfterDecimal);
	}
	if (this->isMinus)
		return result * -1;
	return result;
}

void	ScalarHelper::print_number(double number) {
	int		integer = static_cast<int>(number);
	double test_int = static_cast<int>(number) - number;
	if (test_int == 0.0)
		this->isInt = true;
	if (this->isInt == true)
	{
		if (integer > 127 || integer < 32)
			std::cout << "Character is unpritable\n";
		else
			std::cout << "Char: " << static_cast<char>(integer) << std::endl;
		std::cout << "Int: " << integer << std::endl;
		std::cout << "Float: " << number << ".0f\n";
		std::cout << "Double: " << number << ".0\n";
	}
	else
	{
		std::cout << "Character is Impossible\n";
		std::cout << "Integer is Impossible\n";
		std::cout << "Float: " << number << "f\n";
		std::cout << "Double: " << number << "\n";
	}
}