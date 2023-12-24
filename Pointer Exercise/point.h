#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

typedef struct{
    char name[1];
    int x,y;
}point;

void showpoint(point a);
double dist(point a,point b);
int eq(point a, point b);
void fillpoint(point *p);
void fillPoints(point arr[],int n);
void printPoints(point arr[],int n);
void farthest(point arr[],int n);

#endif // POINT_H_INCLUDED
