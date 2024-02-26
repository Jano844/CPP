

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat *test1 = new Bureaucrat();
	std::cout << *test1 << std::endl;

	try
	{
		test1->incrementGrade();
		std::cout << *test1 << std::endl;
		test1->incrementGrade();
		std::cout << *test1 << std::endl;
		test1->setGrade(1);
		std::cout << *test1 << std::endl;
		test1->setGrade(-190);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete test1;
	std::cout << "---------------------\n";


	try {
		Bureaucrat *test = new Bureaucrat("Jan", 120);
		std::cout << *test << std::endl;
		delete test;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
