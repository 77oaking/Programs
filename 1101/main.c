#include <stdio.h>
#include <stdlib.h>

int main()
{
        int x,y,i=0,j,sum[10000],n,temp;
    while(1){
        scanf("%d %d",&x,&y);
        if(x==0 || x<0 || y==0 || y<0)
            break;

        if(y<x){
            temp=x;
            x=y;
            y=temp;
        }
        for(j=x;j<=y;j++){
                printf("%d ",j);
                sum[i]=sum[i]+j;
            }
        printf("Sum=%d\n",sum[i]);
        i++;
    }
//    for(i=0;i<n;i++){
//        printf("%d\n",sum[i]);
//    }






    return 0;
}
