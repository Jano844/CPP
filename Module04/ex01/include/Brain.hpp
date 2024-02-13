

#pragma once

#include <iostream>

class Brain {
public:
	Brain();
	~Brain();

	std::string get_idea(int i);
	void set_idea(int i, std::string input);
private:
	std::string ideas[100];
};
