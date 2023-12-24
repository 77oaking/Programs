#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0,i;
    float num[5];
    for(i=0;i<6;i++){
        scanf("%f",&num[i]);
    }
    for(i=0;i<6;i++){
        if(num[i]>0){
            count++;
        }
    }
    printf("%d valores positivos\n",count);

    return 0;
}
