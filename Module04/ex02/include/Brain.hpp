

#pragma once

#include <iostream>

class Brain {
public:
	Brain();
	Brain(const Brain &reference);
	~Brain();

	Brain &operator=(const Brain &reference);

	std::string get_idea(int i);
	void set_idea(int i, std::string input);
private:
	std::string ideas[100];
};
