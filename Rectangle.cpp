#include "Rectangle.h"

Rectangle::Rectangle()
{
    length = 0;
    width = 0;
}

Rectangle::Rectangle(double l, double w)
{
    setLength(l);
    setWidth(w);
}

void Rectangle::setLength(double l)
{
    if (l >= 0)
        length = l;
    else
        length = 0;
}

void Rectangle::setWidth(double w)
{
    if (w >= 0)
        width = w;
    else
        width = 0;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getArea() const
{
    return length * width;
}