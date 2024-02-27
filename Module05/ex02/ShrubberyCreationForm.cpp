

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137) , target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : Form(other), target(other.target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	Form::operator=(other);
	target = other.target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();
	if (getSigned() == false)
		throw FormNotSigned();
	std::ofstream outfile((this->target + "_shrubbery" + ".txt").c_str());
	// std::ofstream outfile((this->target + "_shrubbery").c_str());
	outfile << "            /\\           "<< std::endl;
	outfile << "           //\\\\         " << std::endl;
	outfile << "          ///\\\\         " << std::endl;
	outfile << "         ////\\\\\\       " << std::endl;
	outfile << "        /////\\\\\\       " << std::endl;
	outfile << "       //////\\\\\\\\     " << std::endl;
	outfile << "      ///////\\\\\\\\     " << std::endl;
	outfile << "     ////////\\\\\\\\\\   " << std::endl;
	outfile << "    /////////\\\\\\\\\\   " << std::endl;
	outfile << "   /////////\\\\\\\\\\\\  " << std::endl;
	outfile << "           ||||           " << std::endl;
	outfile << "           ||||           " << std::endl;
	outfile << "           ||||           " << std::endl;
	outfile << std::endl;
	outfile.close();
}