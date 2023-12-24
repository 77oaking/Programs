#ifndef GRADE_H_INCLUDED
#define GRADE_H_INCLUDED

typedef struct{
    char code[10];
    double grade;
}grades;

void fillgrade(grades *p);

void fillgrades(grades arr[],int n);

#endif // GRADE_H_INCLUDED
