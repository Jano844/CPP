
#include "../include/Point.hpp"

float	area_of_triangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float	result = (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2.0;
	if (result < 0)
		return -result;
	if (result == 0)
		return 0;
	return result;
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	float	area_a_b_c = area_of_triangle(a.get_x().toFloat(), a.get_y().toFloat(), b.get_x().toFloat(), b.get_y().toFloat(), c.get_x().toFloat(), c.get_y().toFloat());

	float	area_a_b_p = area_of_triangle(a.get_x().toFloat(), a.get_y().toFloat(), b.get_x().toFloat(), b.get_y().toFloat(), point.get_x().toFloat(), point.get_y().toFloat());
	float	area_a_p_c = area_of_triangle(a.get_x().toFloat(), a.get_y().toFloat(), point.get_x().toFloat(), point.get_y().toFloat(), c.get_x().toFloat(), c.get_y().toFloat());
	float	area_p_b_c = area_of_triangle(point.get_x().toFloat(), point.get_y().toFloat(), b.get_x().toFloat(), b.get_y().toFloat(), c.get_x().toFloat(), c.get_y().toFloat());
	
	if (roundf(area_a_b_c) == roundf(area_a_b_p + area_a_p_c + area_p_b_c) && (area_a_b_p && area_a_p_c && area_p_b_c))
		return (true);
	return (false);
}