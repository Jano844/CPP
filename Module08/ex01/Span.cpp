
#include "Span.hpp"

Span::Span() : size(0) {}

Span::Span(unsigned int N) : size(N) {}

Span::Span(const Span & other) : size(other.size) {
	int end = static_cast<int>(other.vec.size());
	for (int i = 0; i < end; i++) {
		this->vec.push_back(other.vec[i]);
	}
}

Span::~Span() {}

Span& Span::operator=(const Span & other) {
	this->size = other.size;
	int end = static_cast<int>(other.vec.size());
	for (int i = 0; i < end; i++) {
		this->vec.push_back(other.vec[i]);
	}
	return *this;
}

void	Span::addNumber(int number) {
	if (vec.size() >= this->size)
		throw ArraySizeFull();
	vec.push_back(number);
}

unsigned int	Span::getSize() {
	return this->size;
}

void	Span::printSpan() {
	for (unsigned int i = 0; i < this->vec.size(); i++)
		std::cout << this->vec[i] << " ";
	std::cout << std::endl;
}

unsigned int	Span::shortestSpan() {
	if (this->vec.size() < 2)
		throw SmallArraySize();
	int min_span = INT_MAX;
	for (unsigned int i = 0; i < this->vec.size() - 1; i++)
	{
		for (unsigned int j = i + 1; j < this->vec.size(); j++)
		{
			int span = std::abs(this->vec[j] - this->vec[i]);
			min_span = std::min(min_span, span);
		}
	}
	return min_span;
}

unsigned int	Span::longestSpan() {
	if (this->vec.size() < 2)
		throw SmallArraySize();
	std::vector<int>::iterator min = min_element(this->vec.begin(), this->vec.end());
	std::vector<int>::iterator max = max_element(this->vec.begin(), this->vec.end());
	return std::abs(*max - *min);
}