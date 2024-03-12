
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Array.hpp"





int main() {

	// Fill elements
	Array<std::string> arr(3);
	arr[0] = "HelloWorld";
	arr[1] = "I am Jan";
	arr[2] = "good bye :)";

	// Array<int> arr(5);
	// for (unsigned int i = 0; i < arr.getSize(); ++i) {
	// 	arr[i] = i * (rand() % 20);
	// }

	std::cout << arr;

	// try to acces one of the elements
	try {
		std::cout << arr[1] << std::endl;
	}
	catch (std::out_of_range& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
