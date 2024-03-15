

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const	std::string	name;
	bool				Signed;
	const int			gradeToSign;
	const int			gradeToExecute;
public:
	Form();
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(Form const &other);
	~Form();
	Form &operator=(Form const &other);

	std::string getName() const;
	bool		getSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;

	void		setSigned(bool boolean);
	void		beSigned(Bureaucrat const &bureau);
};

std::ostream& operator<<(std::ostream& os, const Form& obj);
