#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0,i;
    float num[5],avg;
    for(i=0;i<6;i++){
        scanf("%f",&num[i]);
    }
    for(i=0;i<6;i++){
        if(num[i]>0){
            count++;
            avg=avg+num[i];
        }
    }
    printf("%d valores positivos\n",count);
    printf("%.1f\n",avg/count);


    return 0;
}
