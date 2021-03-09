#include "shape.h"

void Shape::addPoint(Point *p)
{
    this->points.push_back(p);
}

Point *Shape::getPoint(int i)
{
    return this->points.at(i);
}

int Shape::size()
{
    return this->points.size();
}