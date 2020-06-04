#include "pqtype.h"
#ifndef POINTS_H_INCLUDED
#define POINTS_H_INCLUDED

using namespace std;
class Points
{
public:
    Points(int,int);
    void print();
    int getx();
    int gety();
    int point(int);
    int dist();
private:
    int x;
    int y;
};
#include "points.tpp"
#endif //POINTS_H_INCLUDED
