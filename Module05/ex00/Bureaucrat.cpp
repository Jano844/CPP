

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : name("default"), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
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
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

void Bureaucrat::incrementGrade()
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade()
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low.";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high.";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
	os << "Bureaucrat: " << obj.getName() << " has a grade of: " << obj.getGrade();
	return os;
}