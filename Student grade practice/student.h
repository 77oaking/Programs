#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include "grade.h"

typedef struct{
    int id;
    char ryear[5];
    char specialty;
    grades grade[3];
    double average;

}student;


void fillstudent(student arr[]);
void fillstudents(student arr[],int n);

int spnumber(student s[],int n,char c);
double bestgrade(student s);
void setaverage(student *s);
void beststudent(student *s,int n,char c);


#endif // STUDENT_H_INCLUDED
