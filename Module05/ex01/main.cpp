

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat *test = new Bureaucrat();
	Form *testForm = new Form();

	try
	{
		test->setName("Jan");
		testForm->setName("Form");
		test->setGrade(20);
		testForm->setGradeToSign(110);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << testForm->getGradeToSign() << std::endl;

	try
	{
		test->signForm(*testForm);
		testForm->beSigned(*test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 0;
}
