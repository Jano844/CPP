

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"

int main()
{
	Point	a(0, 0);
	Point	b(5, 0);
	Point	c(0, 5);
	Point	point(0.01f, 3);

	if (bsp(a, b, c, point))
		std::cout << "Point is inside the triangle a b c\n";
	else
		std::cout << "Point isn't inside the triangle a b c\n";
	return (0);
}