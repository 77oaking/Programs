#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,k;
    int b;
    k=3;
    printf("Enter your subjective point: ");
    scanf("%d",&a);
    if(a>=50)
    {
        b=3;
        printf("Your subjective number is:%d\n",a);
        printf("Your Grade point is : %d \n",b);
    }
    else if(a>=60)
    {

        printf("Your subjective number is:%d\n",a);
        printf("Your Grade point is : %d \n",k);
    }
    else{
        printf("Your subjectve number is :%d\n",a);
    }
    return 0;
}
