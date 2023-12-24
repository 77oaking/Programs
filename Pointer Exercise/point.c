#include<stdio.h>
#include<stdlib.h>
#include"point.h"
#include<math.h>

void showpoint(point a){
    printf("%s(%d,%d)\n",a.name,a.x,a.y);
}

double dist(point a,point b){
    return sqrt((pow((a.x-b.x),2))+(pow((a.y-b.y),2)));
}

int eq(point a,point b){
    return dist(a,b)<0.00001;
}
fillpoint(point *p){
    scanf(" %c %d %d",&p->name,&p->x,&p->y);
}

void fillPoints(point arr[],int n){
    for(int i=0;i<n;i++){
        printf("Enter point %d :",1+i);
        //fflush(stdin);
        fillpoint(&arr[i]);
    }

}

void printPoints(point arr[],int n){
    for(int i=0;i<n;i++){
        showpoint(arr[i]);
    }
}


void farthest(point arr[],int n){
    point p1=arr[0];
    point p2=arr[1];
    double longest= dist(arr[0],arr[1]);

    for(int i=0;i<n;i++){
        for(int j=0;j<n &&j!=i;j++){
            double distance= dist(arr[i],arr[j]);
            if(distance>longest){
                p1=arr[i];
                p2=arr[j];
                longest=distance;
            }
        }
    }
    printf("Farthest two points are ");
    showpoint(p1);
    showpoint(p2);
    printf("with distance %lf",longest);

}
