#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int c,d;
    double e,f,Ts;
    scanf("%d %d %lf",&a,&b,&e);
    scanf("%d %d%lf",&c,&d,&f);
    Ts=b*e+d*f;
    printf("VALOR A PAGAR: R$ %0.2lf\n",Ts);


    return 0;
}
