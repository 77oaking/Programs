#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    double c,SALARY;
    scanf("%d %d %lf",&a,&b,&c);
    SALARY = (double)b*c;
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %0.2lf\n",SALARY);
    return 0;
}
