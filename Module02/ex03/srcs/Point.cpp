
#include "../include/Point.hpp"

Point::Point(): x(0), y(0) {
	std::cout << "Default constructor called\n";
}

Point::Point(const float num1, const float num2): x(num1), y(num2) {
	std::cout << "float constructor called\n";
}

Point::Point(const Point &reference) : x(reference.x), y(reference.y) {
	std::cout << "Copy constructor called\n";
}

Point& Point::operator=(const Point &reference) {
	if (this != &reference) {
		(Fixed)this->x = reference.get_x();
		(Fixed)this->y = reference.get_y();
	}
	return *this;
}

Point::~Point() {
	std::cout << "Destructor called\n";
}

Fixed Point::get_x() const {
	return this->x;
}
Fixed Point::get_y() const {
	return this->y;
}