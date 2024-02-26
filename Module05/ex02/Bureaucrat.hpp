

#pragma once

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string name;
	int			grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &other);
	~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &other);

	std::string getName() const;
	int			getGrade() const;
	void		setName(std::string name);
	void		setGrade(int grade);

	void		incrementGrade();
	void		decrementGrade();

	void		signForm(Form &f);
	

	
};

class GradeTooHighException : public std::exception
{
	public:
		virtual const char *what() const throw();
};

class GradeTooLowException : public std::exception
{
	public:
		virtual const char *what() const throw();
};

class FormNotSigned : public std::exception
{
	public:
		virtual const char *what() const throw();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
