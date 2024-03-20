

#include "Span.hpp"


int main() {
	Span testArray(100);

	try {
		testArray.addNumber(1);
		testArray.addNumber(2);
		testArray.addNumber(15);
		testArray.addNumber(10);
		testArray.addNumber(-100);
		testArray.addNumber(11);
		testArray.addNumber(2);
		int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, -100, 100};
		testArray.addNumberArray(arr);


		testArray.printSpan();

		std::cout << testArray.longestSpan() << std::endl;
		std::cout << testArray.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}

// int main()
// {
// 	srand(time(NULL));
// 	Span sp = Span(10000);
// 	for (unsigned int i = 0; i < sp.getSize(); i++)
// 		sp.addNumber(rand() % 1000000);
// 	std::cout << sp.longestSpan() << std::endl;
// 	std::cout << sp.shortestSpan() << std::endl;
// }
