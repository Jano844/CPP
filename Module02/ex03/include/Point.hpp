

#pragma once

#include "Fixed.hpp"
#include <cmath>

class Point
{
private:
	const Fixed	x;
	const Fixed	y;
public:
	Point();
	Point(const float num1, const float num2);
	Point(const Point &reference);
	Point& operator=(const Point &other);
	~Point();

	Fixed get_x() const;
	Fixed get_y() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);