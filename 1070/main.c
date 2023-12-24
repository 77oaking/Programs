#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    scanf("%d",&x);
    i=(x%2==0)? x+1:x;
    for(i;i<=(x+11);i+=2){
        printf("%d\n",i);

    }
//    for(i=0;i<=12;i+=2){
//        printf("%d\n",x);
//        x++;
//
//    }



    return 0;
}
