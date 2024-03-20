

#pragma once

#include <iostream>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack &other) : std::stack<T>(other) {}
	MutantStack &operator=(const MutantStack &other)
	{
		if (this != &other)
			std::stack<T>::operator=(other);
		return *this;
	}
	~MutantStack() {}

	typedef typename std::stack<T>::container_type::iterator iterator; // define iterator as a type of the stack's container's iterator
	iterator begin() { return std::stack<T>::c.begin(); } // return iterator to the beginning of the stack
	iterator end() { return std::stack<T>::c.end(); } // return iterator to the end of the stack


	// Iterating through the stack and use function on each element
	void iterate(void (*f)(T &))
	{
		iterator it = begin();
		iterator ite = end();
		while (it != ite)
			f(*it++);
	}
};

// print function
template <typename T>
void print(T t) {
	std::cout << t << std::endl;
}