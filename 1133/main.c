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
    for(i=x;i<y;++i){
        if(i%5==2||i%5==3){
            printf("%d\n",i);
        }
    }



    return 0;
}
