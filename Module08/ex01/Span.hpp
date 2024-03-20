

#pragma once

#include <climits>
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned int size;
	std::vector<int> vec;
public:
	Span();
	Span(unsigned int N);
	Span(const Span & other);
	~Span();
	Span& operator=(const Span & other);

	void			addNumber(int number);

	void			addNumberArray(int *arr);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
	
	unsigned int	getSize();
	void			printSpan();
};

class ArraySizeFull : public std::exception
{
public:
	virtual const char *what() const throw() {
		return "Array is full";
	}
};

class SmallArraySize : public std::exception
{
public:
	virtual const char *what() const throw() {
		return "Array contains less than 2 elements";
	}
};
