

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : name("default"), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : name(other.name), grade(other.grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	name = other.name;
	grade = other.grade;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::setName(std::string name)
{
	this->name = name;
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

void Bureaucrat::incrementGrade()
{
	if ((grade - 1) < 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade()
{
	if ((grade + 1) > 150)
		throw GradeTooLowException();
	grade++;
}

void		Bureaucrat::signForm(Form &f) {
	if (f.getSigned() == true) {
		std::cout << f.getName() << " is already signed\n";
		return ;
	}
	if (!(this->grade <= f.getGradeToSign()))
		throw GradeTooLowException();
	f.setSigned(true);
	std::cout << this->name << " signed " << f.getName() << std::endl;
}


const char* GradeTooLowException::what() const throw()
{
	return "Grade is too low.";
}

const char* GradeTooHighException::what() const throw()
{
	return "Grade is too high.";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
	os << "Bureaucrat: " << obj.getName() << " has a grade of: " << obj.getGrade() << std::endl;
	return os;
}