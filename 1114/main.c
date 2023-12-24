#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    while(1){
        scanf("%d",&i);
        if(i==2002){
            printf("Acesso Permitido\n");
            break;
        }else printf("Senha Invalida\n");
    }




    return 0;
}
