#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1,n2,n3,n4,a,b,c;
    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);
    a=(n1*2+n2*3+n3*4+n4*1)/10;

    if (a<5.0){
        printf("Media: %.1lf\n",a);
        printf("Aluno reprovado.\n");
    }
    else if(a>=5.0&&a<7){
        scanf("%lf",&b);
        printf("Media: %.1lf\n",a);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n",b);
        c=(a+b)/2;
        if(c>=5.0){
            printf("Aluno aprovado.\n");
        }else printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",c);
    }else {
        printf("Media: %.1lf\n",a);
        printf("Aluno aprovado.\n");
    }
    return 0;
}
