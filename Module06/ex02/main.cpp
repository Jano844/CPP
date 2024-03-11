

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
	int i = rand() % 3;
	if (i == 0) {
		// std::cout << "A got created" << std::endl;
		return new A;
	}
	else if (i == 1) {
		// std::cout << "B got created" << std::endl;
		return new B;
	}
	else {
		// std::cout << "C got created" << std::endl;
		return new C;
	}
}

void identify(Base* p) {
	std::cout << "Identify by pointer: ";
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	}
}

void identify(Base& p) {
	std::cout << "Identify by reference: ";
	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (const std::exception& e) {
	}
	try {
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (const std::exception& e) {
	}
	try {
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (const std::exception& e) {
	}
}

int	main()
{
	srand(time(NULL));
	Base& base = *generate();
	identify(base);

	Base *base1 = generate();
	identify(base1);

	delete &base;
	delete base1;
	return (0);
}