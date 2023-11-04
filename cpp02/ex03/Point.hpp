#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;

    public:
        Point();
        Point(const float x, const float y);
        Point &operator = (const Point &point);
        Point(Point const &point);
        Fixed const get_x(void) const;
        Fixed const get_y(void) const;
        ~Point();

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
