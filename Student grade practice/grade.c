#include<stdio.h>
#include<stdlib.h>
#include "grade.h"


void fillgrade(grades *p){
    printf("Enter your Course name and grade:");
    scanf("%s %lf",p->code,&p->grade);
    printf("\n");
}


void fillgrades(grades arr[],int n){
    for(int i=0;i<n;i++){
        fillgrade(&arr[i]);
    }

}
