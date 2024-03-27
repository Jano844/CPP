

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

void	RPN::check_input(std::string str) {
	std::string allowed_chars = "0123456789 */+-";
	for (unsigned int i = 0; i < str.size(); i++)
	{
		if (allowed_chars.find(str[i]) != std::string::npos)
			;
		else {
			std::cout << "Error: string contains wrong characters\n";
			exit(1);
		}
	}
	// std::cout << "String can be processed" << std::endl;
}

void	RPN::make_list(std::string str) {
	int ops = 0, num = 0;
	for (unsigned int i = 0; i < str.size(); i++)
	{
		if (str[i] != ' ') {
			if (std::isdigit(str[i]))
				num++;
			else
				ops++;
			std::string temp(1, str[i]);
			this->list.push_back(temp);
		}
	}
	if (num - ops != 1) {
		std::cout << "Wrong input!!\n";
		exit(1);
	}
}

void	RPN::print_list() {
	// std::cout << "-----------\n";
	std::list<std::string>::iterator begin = this->list.begin();
	std::list<std::string>::iterator end = this->list.end();

	while (begin != end)
	{
		std::cout << *begin << std::endl;
		begin++;
	}
}

void	RPN::clear_list() {
	while (ops_list.size() != 0)
		ops_list.pop_front();
	while (number_list.size() != 0)
		number_list.pop_front();
}

void	RPN::fill_first() {
	clear_list();
	std::list<std::string>::iterator begin = this->list.begin();
	std::list<std::string>::iterator end = this->list.end();
	std::string ops = "+-*/";

	while (begin != end)
	{
		std::string temp = *begin;
		if (ops.find(temp) != std::string::npos)
			break ;
		// std::cout << temp << std::endl;
		this->number_list.push_front(std::atof(temp.c_str()));
		begin++;
		this->list.pop_front();
	}
	while (begin != end)
	{
		std::string temp = *begin;
		if (!(ops.find(temp) != std::string::npos))
			break ;
		// std::cout << temp << std::endl;
		this->ops_list.push_back(temp);
		begin++;
		this->list.pop_front();
	}
}

void	RPN::calc_first() {
	float temp = *this->number_list.begin();
	this->number_list.pop_front();

	while (this->ops_list.size() != 0)
	{
		if (*this->ops_list.begin() == "*")
			temp = *this->number_list.begin() * temp;
		if (*this->ops_list.begin() == "/")
			temp = *this->number_list.begin() / temp;
		if (*this->ops_list.begin() == "+")
			temp = *this->number_list.begin() + temp;
		if (*this->ops_list.begin() == "-")
			temp = *this->number_list.begin() - temp;
		this->number_list.pop_front();
		this->ops_list.pop_front();
	}



	std::stringstream ss;
	ss << temp;
	std::string floatString = ss.str();
	// std::cout << temp << std::endl;
	this->list.push_front(floatString);

	while (this->number_list.size() != 0)
	{
		std::stringstream sstream;
		sstream << this->number_list.front();
		std::string f_toString = sstream.str();
		this->list.push_front(f_toString);
		this->number_list.pop_front();
	}
}

void	RPN::calculation_loop() {
	while (this->list.size() != 1) {
		fill_first();
		calc_first();
	}
	print_list();
}
