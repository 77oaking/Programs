#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i=0,n;
    scanf("%d",&n);
    while(i<n){
        scanf("%d %d",&x,&y);
        if(y==0)printf("divisao impossivel\n");
        else printf("%.1f\n",(float)x/y);
        i++;
    }





    return 0;
}
