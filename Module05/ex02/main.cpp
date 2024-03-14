

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	Bureaucrat *test = new Bureaucrat();
	Form *Robo = new RobotomyRequestForm("Robo");

	try
	{
		test->setName("Marvin");
		test->setGrade(50); // 50 should fail to execute
		Robo->beSigned(*test);
		Robo->execute(*test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete Robo;

	std::cout << "-------------------" << std::endl;

	Form *Pres = new PresidentialPardonForm("Pres");
	try
	{
		test->setGrade(1); // 1 should pass to execute
		test->signForm(*Pres);
		Pres->execute(*test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete Pres;
	
	std::cout << "-------------------" << std::endl;

	Form *Shrub = new ShrubberyCreationForm("Shrub");
	try
	{
		test->setGrade(137); // 137 should pass to execute
 		test->signForm(*Shrub);
		Shrub->execute(*test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete Shrub;
	
	delete test;
	return 0;
}