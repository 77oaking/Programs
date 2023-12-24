#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

typedef struct{
    point upperright,lowerleft;
}rect;
double area(rect r);
int pointinside(rect r,point p);
int rectinside(rect r,rect p);


#endif // RECTANGLE_H_INCLUDED
