

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
int easyfind(T & container, unsigned int toFind) {
	if (std::find( container.begin(), container.end(), toFind ) != container.end()) {
		std::cout << "Found\n";
		return 0;
	}
	std::cout << "not Found\n";
	return 1;
};
