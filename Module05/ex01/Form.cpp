
#include "Form.hpp"

Form::Form() : name("default Form"), Signed(false), gradeToSign(150), gradeToExecute(150) {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), Signed(false) , gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	if (gradeToSign < 0 || gradeToExecute < 0)
		throw GradeTooHighException();
}

Form::Form(Form const &other) : name(other.name), Signed(other.Signed), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {}

Form::~Form() {}

Form &Form::operator=(Form const &other) {
	if (this != &other)
		*this = Form(other);
	return *this;
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

void		Form::setSigned(bool boolean) {
	this->Signed = boolean;
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