#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sum=0;
    scanf("%d",&a);
    for(int i=0;a>0;i++){
        sum=sum+a%10;
        a/=10;
    }
    printf("Sum = %d \n",sum);
    return 0;
}
