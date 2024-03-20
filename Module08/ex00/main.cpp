

#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <ctime>

int main()
{
	srand(time(0));
	std::vector<int> test;
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	test.push_back(4);
	test.push_back(5);


	easyfind(test, 5);


	// std::vector<int> test2;
	// for (int i = 0; i < 100; i++) {
	// 	int r  = rand() % 100;
	// 	test2.push_back(r);
	// 	if (r == 5)
	// 		std::cout << "5 is in the vector\n";
	// 	std::cout << r << " ";
	// }
	// easyfind(test2, 5);
	return 0;
}