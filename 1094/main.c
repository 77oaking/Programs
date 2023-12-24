#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,n,amount[10000],total=0,totalC=0,totalR=0,totalS=0;
    char name;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %c",&amount[i],&name);
        total=total+amount[i];
        switch (name){
        case 'C':
            totalC=totalC+amount[i];
            break;

        case 'R':
            totalR=totalR+amount[i];
            break;

        case 'S':
            totalS=totalS+amount[i];
            break;
        }

    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",totalC);
    printf("Total de ratos: %d\n",totalR);
    printf("Total de sapos: %d\n",totalS);
    printf("Percentual de coelhos: %.2f %%\n",((float)totalC/total)*100);
    printf("Percentual de ratos: %.2f %%\n",((float)totalR/total)*100);
    printf("Percentual de sapos: %.2f %%\n",((float)totalS/total)*100);



    return 0;
}
