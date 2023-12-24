#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Addition: %d\n",a+b);
    printf("Substraction: %d\n",a-b);
    printf("Multiplication: %d\n",a*b);
    printf("Division: %d\n",a/b);
    int j;
    printf("Do you want to Convert the Degree in Fahrenheit? If so press 1.");
    scanf("%d",&j);
    if(j==1){
        int m;
        printf("Input Degree:");
        scanf("%d",&m);
        printf("Fahrenheit: %f",((float)m*9/5)+32);
    }
    return 0;
}
