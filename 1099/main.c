#include <stdio.h>
#include <stdlib.h>

int main()
{


    int x,y,i,j,sum[10000],n,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if(y<x){
            temp=x;
            x=y;
            y=temp;
        }
        for(j=x+1;j<y;j++){
            if(j%2!=0){
                sum[i]=sum[i]+j;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",sum[i]);
    }



    return 0;
}
