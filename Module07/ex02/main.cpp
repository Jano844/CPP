
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Array.hpp"





int main() {
	Array<int> arr(5);

	// Fill the array
	for (unsigned int i = 0; i < arr.getSize(); ++i) {
		arr[i] = i * (rand() % 20);
	}

	// Access elements through the subscript operator
	std::cout << "Array elements: ";
	for (unsigned int i = 0; i < arr.getSize(); ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	// Access an element out of bounds (should throw an exception)
	try {
		int val = arr[2]; // This should throw an exception
		std::cout << val << std::endl;
	}
	catch (std::out_of_range& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
