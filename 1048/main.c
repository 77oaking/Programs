#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s,ns,es,ip;
    scanf("%f",&s);
    if(s>=0&&s<=400.00){
        ip=15;
        es=(s/100)*ip;
        ns=es+s;
    }else if(s>400&&s<=800.00){
        ip=12;
        es=(s/100)*ip;
        ns=es+s;
    }else if(s>800&&s<=1200.00){
        ip=10;
        es=(s/100)*ip;
        ns=es+s;
    }else if(s>1200&&s<=2000.00){
        ip=7;
        es=(s/100)*ip;
        ns=es+s;
    }else if(s>2000){
        ip=4;
        es=(s/100)*ip;
        ns=es+s;
    }
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n",ns,es,ip);
    return 0;
}
