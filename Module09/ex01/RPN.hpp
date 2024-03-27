

#pragma once

#include <iostream>
#include <list>
#include <cstdlib>
#include <algorithm>
#include <sstream>
#include <cctype>

class RPN
{
private:
	std::list<std::string> list;
	std::list<float> number_list;
	std::list<std::string> ops_list;
	RPN(const RPN & other);
	RPN & operator=(const RPN & other);
public:
	RPN();
	~RPN();

	void	check_input(std::string str);
	void	make_list(std::string str);
	void	print_list();
	void	fill_first();
	void	clear_list();
	void	calc_first();
	void	calculation_loop();
};