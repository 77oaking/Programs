#include<stdio.h>
#include<stdlib.h>
#include "student.h"


void fillstudent(student *s){
    printf("id, registration year, spec:");

    scanf("%d %s %c",s->id,s->ryear,s->specialty);
    fillgrades(s->grade,3);
    setaverage(s);
    printf("\n");
}

void fillstudents(student arr[],int n){
    for(int i=0;i<n;i++){
        fillstudent(&arr[i]);
    }
}

int spnumber(student s[],int n, char c){
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i].specialty== c)count++;
    }
    return count;
}

double bestgrade(student s){
    double maxgrade= s.grade[0].grade;
    for(int i=0;i<3;i++){
        maxgrade=(maxgrade<s.grade[i].grade)?s.grade[i].grade:maxgrade;
    }
    return maxgrade;
}

void setaverage(student *s){
    double average=0;
    for(int i=0;i<3;i++){
        average+= s->grade[i].grade;

    }
    s->average=average/3;
}
void beststudent(student arr[],int n,char c){
    student best;
    int i=0;
    for(;i<n;i++){
        if(arr[i].specialty == c)
            best=arr[i];
            break;
    }
    double currentBestgrade = bestgrade(best);
    for(; i<n;i++)
    if(arr[i].specialty==c){
        double grade = bestgrade(arr[i]);
        if(grade>currentBestgrade){
            best=arr[i];
            currentBestgrade=grade;
        }
    }
    printf("%d , %lf",best.id,currentBestgrade);

}





