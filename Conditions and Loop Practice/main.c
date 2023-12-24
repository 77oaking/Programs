#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;///i=3,j=5
    scanf("%d %d %d",&i,&j,&k);

//    if(i>j ){
//        printf("The number %d is greater than %d",i,j);
//    }else printf("The number %d is greater than %d",j,i);
//
    if(i>j&&i>k){
        printf("The greatest is %d",i);
    }
    if(j>i&&j>k){
        printf("The greatest is %d",j);
    }
    if(k>i&&k>j){
        printf("The greatest is %d",k);
    }

    return 0;
}
