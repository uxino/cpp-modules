#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float bx, by, cx, cy, x, y;

    bx = b.get_x().toFloat() - a.get_x().toFloat();
    by = b.get_y().toFloat() - a.get_y().toFloat();
    cx = c.get_x().toFloat() - a.get_x().toFloat();
    cy = c.get_y().toFloat() - a.get_y().toFloat();
    x = point.get_x() - a.get_x();
    y = point.get_y() - a.get_y();

    float d, WA, WB, WC;

    d = (bx * cy) - (cx * by);
    WA = (x * (by - cy) + (y * (cx - bx)) + (bx * cy) - (cx*by)) / d;
    WB = (x * cy - y * cx) / d;
    WC = (y * bx - x * by) / d;

    if (WA >= 0.f  && WA <= 1.f  && WB >= 0.f && WB <= 1.f && WC >= 0.f && WC <= 1.f)
        return true;
    else
        return false;
}