#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counteven=0,countodd=0,countpositive=0,countnegative=0,i,num[4];
    for(i=0;i<5;i++){
        scanf("%i",&num[i]);
    }
    for(i=0;i<5;i++){
        if(num[i]%2==0){
            counteven++;
        }
        if(num[i]%2!=0){
            countodd++;
        }
        if(num[i]>0){
            countpositive++;
        }
        if(num[i]<0){
            countnegative++;
        }
    }
    printf("%d valor(es) par(es)\n",counteven);
    printf("%d valor(es) impar(es)\n",countodd);
    printf("%d valor(es) positivo(s)\n",countpositive);
    printf("%d valor(es) negativo(s)\n",countnegative);



    return 0;
}
