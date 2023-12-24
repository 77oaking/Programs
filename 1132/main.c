#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,y,temp;
    int sum=0;
    scanf("%d %d",&x,&y);
    if(y>x){
        temp=x;
        x=y;
        x=temp;
    }
    for(i=x;i<=y;++i){
        if(i%13!=0){
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
