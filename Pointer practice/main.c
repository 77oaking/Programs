#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[100];
    int age;
}person;

void scanperson(person *p){
    printf("Enter your name:");
//    gets((*p).name);
    gets(p->name);
    printf("Enter your Age:");
    scanf("%d",&p->age);
}
void printperson(person p){
    printf("The name is %s and the age is %d",p.name,p.age);
}


int main()
{
    person p1;
    scanperson(&p1);
    printperson(p1);


    return 0;
}
