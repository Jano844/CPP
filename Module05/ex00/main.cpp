

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat *test1 = new Bureaucrat();

	std::cout << test1->getName() << "s grade is: " << test1->getGrade() << std::endl;
	test1->incrementGrade();
	std::cout << test1->getName() << "s grade is: " << test1->getGrade() << std::endl;
	// try {
	// 	test1->setGrade(-1);
	// } catch(const Bureaucrat::GradeTooHighException::exception& e) {
	// 	std::cerr << e.what() << '\n';
	// }
	//catch (const Bureaucrat::GradeTooLowException::exception& e) {
	// 	std::cerr << e.what() << '\n';
	// }
	delete test1;

	try
	{
		Bureaucrat *test = new Bureaucrat("Jan", -1);
		std::cout << test->getName() << "s grade is: " << test1->getGrade() << std::endl;
		delete test;
	}
	catch(const Bureaucrat::GradeTooHighException::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
