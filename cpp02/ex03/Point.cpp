#include "Point.hpp"

Point::Point():x(0) , y(0)
{
}
Point::Point(Point const &point): x(point.x), y(point.y)
{
}
Point::Point(const float x,const float y):x(x),y(y)
{
}
Point &Point::operator = (const Point &point)
{
    (void)point;
    return (*this);
}

const Fixed Point::get_x() const
{
    return this->x;
}

const Fixed Point::get_y() const
{
    return this->y;
}

Point::~Point()
{
}