#include "Circle.h"

Circle::Circle(int32_t s32_radius)
{
	this->ms32_radius = s32_radius;
}

int32_t Circle::getRadius()
{
	return ms32_radius;
}

void Circle::setRadius(int32_t s32_radius)
{
	this->ms32_radius = s32_radius;
}

double Circle::getArea()
{
	return 3.14 * ms32_radius * ms32_radius;
}