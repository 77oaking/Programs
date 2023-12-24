#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n;
    scanf("%f",&n);
    if(n>0 && n<=2000){
        printf("Isento \n");
    }
    if (n>2000 && n<=3000){
        printf("R$ %.2f \n",(n-2000)*8/100);
    }
    if (n>3000 && n<=4500){
        printf("R$ %.2f \n",(n-3000)*18/100+80);
    }
    if (n>4500){
        printf("R$ %.2f \n",(n-4500)*28/100+350);
    }

    return 0;
}
