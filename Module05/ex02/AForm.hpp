

#pragma once

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string name;
	bool		Signed;
	int			gradeToSign;
	int			gradeToExecute;
public:
	Form();
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(Form const &other);
	virtual ~Form();
	Form &operator=(Form const &other);

	std::string getName() const;
	bool		getSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;
	void		setName(std::string set_name);
	void		setSigned(bool boolean);
	void		setGradeToSign(int num);
	void		setGradeToExecute(int num);

	void			beSigned(Bureaucrat const &bureau);
	virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const Form& obj);
