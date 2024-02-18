
#include <iostream>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *pointer = &str;
	std::string &references = str;

	std::cout << "str: " << str << std::endl;
	std::cout << "ptr: " << *pointer << std::endl;
	std::cout << "ref: " << references << std::endl << std::endl;
	std::cout << "str adress: " << &str << std::endl;
	std::cout << "ptr adress: " << pointer << std::endl;
	std::cout << "ref adress: " << &references << std::endl;
	return (0);
}


// pointer can be NULL and change its address that it points to, reference stays always the same and cant be NULL
// pointers more flexible, but references more stable, they have to point to an existing not changeing object