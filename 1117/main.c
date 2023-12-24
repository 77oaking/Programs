#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    float score[1],n;
    while(i<2){
        scanf("%f",&n);
        if(n>=0&&n<=10){
            score[i]=n;
            i++;
        }else {
            printf("nota invalida\n");
            continue;}
    }
    printf("media = %.2f",(score[0]+score[1])/2);




    return 0;
}
