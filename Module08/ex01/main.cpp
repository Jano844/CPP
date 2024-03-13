

#include "Span.hpp"

// void	add_random_number(Span & arr, unsigned int size)
// {
// 	std::mt19937 rng(std::random_device{}());
// 	std::uniform_int_distribution<int> distribution(1, 100);

// 	for (unsigned int i = 0; i < size; i++) {
// 		arr.addNumber(distribution(rng));
// 	}
// }

int main() {
	Span testArray(10);

	testArray.addNumber(1);
	testArray.addNumber(2);
	testArray.addNumber(15);
	testArray.addNumber(10);
	testArray.addNumber(-100);
	testArray.addNumber(11);
	testArray.addNumber(2);



	testArray.printSpan();

	std::cout << testArray.longestSpan() << std::endl;
	std::cout << testArray.shortestSpan() << std::endl;
	return 0;
}