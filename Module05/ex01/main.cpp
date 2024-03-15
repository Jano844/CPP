

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat *test = new Bureaucrat();

	try
	{
		Form *testForm = new Form("Form", 110, 1);
		test->setName("Jan");
		test->setGrade(109);
		std::cout << "Grade to Sign: " << testForm->getGradeToSign() << std::endl;
		test->signForm(*testForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
