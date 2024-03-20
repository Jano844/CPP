

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.push(21);
	std::cout << mstack.top() << std::endl;

	mstack.pop();
	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "Iterating through the stack" << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	--it;
	while (++it != ite)
		std::cout << *it << std::endl;

	return 0;
}







// int main()
// {
// 	std::list<int> mstack;
// 	mstack.push_back(5);
// 	mstack.push_back(17);
// 	mstack.push_back(21);

// 	std::cout << mstack.back() << std::endl;
// 	// std::cout << *(--(mstack.end())) << std::endl; //lol didnt know about .back, but it's the same as the line above

// 	mstack.pop_back();
// 	std::cout << mstack.back() << std::endl;
// 	std::cout << mstack.size() << std::endl;

// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	mstack.push_back(0);


// 	std::cout << "Iterating through the stack" << std::endl;

// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
// 	--it;
// 	while (++it != ite)
// 		std::cout << *it << std::endl;

// 	return 0;
// }




// int main()
// {

// 	MutantStack<int> mstack;

// 	srand(time(0));
// 	for (int i = 0; i < 1000; i++)
// 		mstack.push(rand() % 100);
	
// 	MutantStack<int> test(mstack);
// 	// MutantStack<int> test;
// 	// test = mstack;

// 	test.iterate(::print);
// }