

#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	Intern(Intern const &other);
	~Intern();
	Intern &operator=(Intern const &other);

	Form *makeForm(std::string form, std::string target);
};