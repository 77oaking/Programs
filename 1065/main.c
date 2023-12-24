#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0,i;
    int num[4];
    for(i=0;i<5;i++){
        scanf("%i",&num[i]);
    }
    for(i=0;i<5;i++){
        if(num[i]%2==0){
            count++;
        }
    }
    printf("%d valores pares\n",count);


    return 0;
}
