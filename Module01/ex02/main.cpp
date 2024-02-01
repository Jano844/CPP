
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