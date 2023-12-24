#include <stdio.h>
#include <stdlib.h>

int main()
{
    double pi=3.14159,R,V;
    scanf("%lf",&R);
    V=(4.0/3)*pi*R*R*R;
    printf("VOLUME = %0.3lf\n",V);

    return 0;
}
