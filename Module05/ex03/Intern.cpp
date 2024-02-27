

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &other) {
	*this = other;
}

Intern::~Intern() {}

Intern	&Intern::operator=(Intern const &other) {
	if (&other == this)
		return *this;
	return *this;
}

Form	*Intern::makeForm(std::string form, std::string target) {
	for (int i = 0; form[i] != '\0'; i++) {
		form[i] = std::tolower(static_cast<unsigned char>(form[i]));
	}
	std::string strs[3] = {"presidentialpardon", "robotomy", "shrubbery"};
	int	counter = 0;
	int	switch_num;
	std::string temp;
	for (int i = 0; i < 3; i++)
	{
		if (form.find(strs[i]) != std::string::npos) {
			counter++;
			switch_num = i;
		}
	}
	if (counter != 1) {
		std::cout << "Wrong input for Intern\n";
		std::cout << "form must have one of these:\n";
		std::cout << "PresidentialPardon\n";
		std::cout << "Robotomy\n";
		std::cout << "Shrubbery\n";
		return NULL;
	}

	switch (switch_num)
	{
	case 0:
		return (new PresidentialPardonForm(target));
	case 1:
		return (new RobotomyRequestForm(target));
	case 2:
		return (new ShrubberyCreationForm(target));
	default:
		break;
	}
	return NULL;
}