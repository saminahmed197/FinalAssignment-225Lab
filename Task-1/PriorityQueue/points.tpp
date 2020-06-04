#include "points.h"
#include "pqtype.h"
#include <cmath>
Points::Points(int x, int y)
{
    this->x=x;
    this->y=y;
}
int Points::dist()
{

    int x1=0;
    int y1=0;
    int forx=(x-x1)*(x-x1);
    int fory=(y-y1)*(y-y1);
    int distance=sqrt(forx+fory);
    return distance;
}
void Points::print()
{
    cout<<"("<<this->x<<","<<this->y<<")";
}
int Points::getx()
{
    return this->x;
}
int Points::gety()
{
    return this->y;
}
