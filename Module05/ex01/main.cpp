

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat *test = new Bureaucrat();
	Form *testForm = new Form("Form", 110, 1);

	try
	{
		test->setName("Jan");
		test->setGrade(149);
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
