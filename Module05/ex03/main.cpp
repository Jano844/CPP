

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"



int	main()
{
	Intern someRandomIntern;
	Bureaucrat jan("Jan", 1);
	Form *test;

	test = someRandomIntern.makeForm("Robotomy", "HelloWorld");
	if (test == NULL)
	{
		std::cout << "Form not found" << std::endl;
		return (0);
	}
	try
	{
		test->beSigned(jan);
		test->execute(jan);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete test;
}