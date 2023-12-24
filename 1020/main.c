#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    printf("%d ano(s) \n",a/360);
    a=a%360;
    printf("%d mun(s)\n",a/30);
    printf("%d dias(s)\n",a%30);




    return 0;
}
