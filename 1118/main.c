#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=0,j;
    float score[1],n;

    while(1){
         while(i<2){
            loop:
            scanf("%f",&n);
            if(n>=0&&n<=10){
                score[i]=n;
                i++;
            }else {
                printf("nota invalida\n");
                continue;}
        }
        printf("media = %.2f\n",(score[0]+score[1])/2);
        i=0;
        check: printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&j);
        if(j==1)goto loop;else if(j==2)break;else goto check;


    }


    return 0;
}
