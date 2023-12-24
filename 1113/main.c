#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i=0,j,sum[10000],n,temp;
    while(1){
        scanf("%d %d",&x,&y);
        if(x==y)
            break;

        if(y<x){
            printf("Decrescente\n");
        }
        if(y>x){
            printf("Crescente\n");
        }
    }



    return 0;
}
