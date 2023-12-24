#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100]={};
    double a,b,TOTAL;
    gets(name);
    scanf("%lf %lf",&a,&b);
    TOTAL = a+(b*15)/100;
    printf("TOTAL = R$ %0.2lf\n",TOTAL);

    return 0;
}
