#include<stdio.h>
#include<stdlib.h>
#include "point.h"
#include "rectangle.h"

double area(rect r){
    return (r.upperright.x-r.lowerleft.x)*(r.upperright.y-r.lowerleft.y);
}

int pointinside(rect r,point p){
    return (r.lowerleft.x<=p.x && r.upperright.x>=p.x )&&
        (r.lowerleft.y <= p.y && r.upperright.y >= p.y);
}

int rectinside (rect r,rect p){
    return pointinside(r,p.lowerleft)&& pointinside(r,p.upperright);
}
