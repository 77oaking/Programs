#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x[10000],n;
    int countin=0,countout=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        if(x[i]>=10 && x[i]<=20){
            countin++;
        }else countout++;
    }
    printf("%d in\n",countin);
    printf("%d out\n",countout);

    return 0;
}
