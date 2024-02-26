
#include "Form.hpp"

Form::Form() : name("default Form"), Signed(false), gradeToSign(150), gradeToExecute(150) {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), Signed(false) {
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	if (gradeToSign < 0 || gradeToExecute < 0)
		throw GradeTooHighException();
	this->gradeToSign = gradeToSign;
	this->gradeToExecute = gradeToExecute;
}

Form::Form(Form const &other) : name(other.name), Signed(other.Signed), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {}

Form::~Form() {}

Form &Form::operator=(Form const &other) {
	this->name = other.name;
	this->Signed = other.Signed;
	this->gradeToSign = other.gradeToSign;
	this->gradeToExecute = other.gradeToExecute;
	return (*this);
}


std::string Form::getName() const {
	return this->name;
}

bool		Form::getSigned() const {
	return this->Signed;
}

int			Form::getGradeToSign() const {
	return this->gradeToSign;
}

int			Form::getGradeToExecute() const {
	return this->gradeToExecute;
}

void		Form::setName(std::string set_name) {
	this->name = set_name;
}

void		Form::setSigned(bool boolean) {
	this->Signed = boolean;
}

void		Form::setGradeToSign(int num) {
	if (num > 150)
		throw GradeTooLowException();
	if (num < 0)
		throw GradeTooHighException();
	this->gradeToSign = num;
}

void		Form::setGradeToExecute(int num) {
	if (num > 150)
		throw GradeTooLowException();
	if (num < 0)
		throw GradeTooHighException();
	this->gradeToExecute = num;
}

void		Form::beSigned(Bureaucrat const &bureau) {
	if (this->Signed == true) {
		std::cout << this->name << " is already Signed\n";
		return ;
	}
	if (!(bureau.getGrade() <= this->gradeToSign))
		throw GradeTooLowException();
	this->Signed = true;
	std::cout << bureau.getName() << " signed " << this->getName() << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Form& obj) {
	if (obj.getSigned())
		os	<< "Form:   " << obj.getName() << " is Signed and needs to be signed by a Bureaucrat with a Grade better or equal than\n" 
			<< obj.getGradeToSign() << " and can only be executed by a Bureaucrat with a better or equal Grade than " << 
			obj.getGradeToExecute() << std::endl;
	else
		os	<< "Form:   " << obj.getName() << " isnt Signed and needs to be signed by a Bureaucrat with a Grade better or equal than\n	" 
			<< obj.getGradeToSign() << " and can only be executed by a Bureaucrat with a better or equal Grade than " << 
			obj.getGradeToExecute() << std::endl;
	return os;
}
