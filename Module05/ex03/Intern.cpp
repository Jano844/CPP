

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


Form	*Intern::makePresidentialPardonForm(const std::string& target) {
	std::cout << "Intern creates PresidentialPardonForm\n";
	return new PresidentialPardonForm(target);
}

Form	*Intern::makeRobotomyRequestForm(const std::string& target) {
	std::cout << "Intern creates RobotomyRequestForm\n";
	return new RobotomyRequestForm(target);
}

Form	*Intern::makeShrubberyCreationForm(const std::string& target) {
	std::cout << "Intern creates ShrubberyCreationForm\n";
	return new ShrubberyCreationForm(target);
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

	if (switch_num > 2 || switch_num < 0)
		return NULL;

	Form* (Intern::*pointer[3])(const std::string&) = {
		&Intern::makePresidentialPardonForm,
		&Intern::makeRobotomyRequestForm,
		&Intern::makeShrubberyCreationForm
	};
	return (this->*pointer[switch_num])(target);
}
